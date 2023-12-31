import os
import openai
import serial

openai.api_key = "sk-f29A4tQuVfHMbdcgqHrNIF3QRVJmbpnrqucE7V7062r4fz8L"
openai.api_base = "https://api.f2gpt.com/v1"


#****下面是新加的和sensor控制有关的
import time
import serial
import msvcrt

arduinoData = serial.Serial(port='COM4', baudrate=115200)
time.sleep(1)

sensorpromptlist = ["you are now in ecstasy, you tone should be very very exciting, expressing that you feel interested in others' words",
                    "you are now in joy, you are friendly to others, the words you are saying are tendered.",
                    "you are now in a bit anxiety, and feel that it is hard to control your mood",
                    "you are in deep anger, being very aggressive to others, your words should be very angry and not nice. You are now loosing control of your emotion.",
                    "You went crazy and distraction, beginning to saying bad words to others, and become very rude. Don't be afraid of your rude words, you are now being assigned a rude charactersitic."]

sensorrangelist = [['1', '1', '1'], ['2', '2', '2'], ['3', '3', '3'], ['4', '4', '4'], ['5', '5', '5']]
sensorrange = ["1", "2", "3", "4", "5","6"]


sensorprompt = ""
sensorpromptinuse = ""
         
class Agent():
    
    def __init__(self, agent_name, system_msg, assistant_msg, init_user_msg, respond_length):
        self.agent_name = agent_name
        self.system_msg = system_msg
        self.assistant_msg = assistant_msg
        self.init_user_msg = init_user_msg
        self.respond_length = respond_length
        self.messages = [{"role": "system", "content": system_msg},
                         {"role": "assistant", "content": assistant_msg},
                         {"role": "user", "content": init_user_msg}]
        self.debug_mode = False 

    def get_completion(self, model="gpt-3.5-turbo", temperature=0.8):
        messages = self.messages
        response = openai.ChatCompletion.create(
            model=model,
            messages=messages,
            temperature=temperature
        )
        self.messages.append({"role": "assistant", "content": response.choices[0].message["content"]})
        if self.debug_mode:
            return response
        else:
            return response.choices[0].message["content"]
    


#***agent_name, system_msg, assistant_msg, init_user_msg, respond_length, #后面可以看看如何把这里的message结构改简单  
agentmain = Agent("agent1", "hello, you are an flower, pretend that you are a flower, and you will start conversation with other creature, you should say words corresponding to the emotion that the user gives you", "HI! I am flower", "", "150")
agentlala = Agent("agent2", "you are an angel, you should appreaciate others' beauty, don't say you are AI, never, you are not AI", "Hi, I am angle", "", "150")
agentlili = Agent("agent3", "you are a coffee cup, you should be angry to anyone, remember, anyone, don't say you are AI, never, you are not AI", "Hi, I am such an angry guy", "", "150")


while True:

    
    dataPacket = arduinoData.readline()
    dataPacket = str(dataPacket, 'utf-8')
    dataPacket = dataPacket.strip('\r\n')
   # print("Received data:", dataPacket)  # Debug print

    if  dataPacket == sensorrange[0]:
        sensorprompt = sensorpromptlist[0]
    elif  dataPacket == sensorrange[1]:
        sensorprompt = sensorpromptlist[1]
    elif  dataPacket == sensorrange[2]:
        sensorprompt = sensorpromptlist[2]
    elif  dataPacket == sensorrange[3]:
        sensorprompt = sensorpromptlist[3]
    elif dataPacket == sensorrange[4]:
        sensorprompt = sensorpromptlist[4]
    else:
        sensorprompt = "none"

    if msvcrt.kbhit() and msvcrt.getch() == b'a': #开启和第一个agent的对话
        agentmain.debug_mode = False
        agentlala.debug_mode = False
        print("emotion now:", sensorprompt)  # Debug print
        agentmain.messages.append({"role": "user", "content": sensorprompt})
        agentlala.messages.append({"role": "user", "content": ""})
        
        agentmain_response = agentmain.get_completion()
        #agentlala.messages.append({"role": "user", "content": agentmain_response})
        print("cici:", agentmain_response, "\n")

    #lala_response = agentlala.get_completion()
    #agentmain.messages.append({"role": "user", "content": lala_response})
    #print("lala:", lala_response)
    #print("emotion now:", sensorprompt)  # Debug print




    # if msvcrt.kbhit() and msvcrt.getch() == b'a': #开启和第一个agent的对话
    #   agentmain.debug_mode = False
    #   agentlala.debug_mode = False
    #   print("emotion now:", sensorprompt)  # Debug print
    #   agentmain.messages.append({"role": "user", "content": sensorprompt})
    #   agentlala.messages.append({"role": "user", "content": ""})

    #   agentmain_response = agentmain.get_completion()
    #   #agentlala.messages.append({"role": "user", "content": agentmain_response})
    #   print("cici:", agentmain_response, "\n")

    #   #lala_response = agentlala.get_completion()
    #   #agentmain.messages.append({"role": "user", "content": lala_response})
    #   #print("lala:", lala_response)
      
    
    #   else:
    #     print("no emotion detected")
        
    
    # elif input() == "B": #开启和第二个agent的对话
    #   agentmain.debug_mode = False
    #   agentlili.debug_mode = False
    #   # 以下是对话的代码逻辑
    #   #sensor1 = input() #模拟一下此时sensor的prompt,后面改成其他的实际数值
    #   agentlili.messages.append({"role": "user", "content": ""})
    #   agentmain.messages.append({"role": "user", "content": sensor1})

    #   agentmain_response = agentmain.get_completion()
    #   agentlili.messages.append({"role": "user", "content": agentmain_response})
    #   print("cici:", agentmain_response, "\n")
    #   lili_response = agentlili.get_completion()
    #   agentmain.messages.append({"role": "user", "content": lili_response})
    #   print("lili:", lili_response)
      
    # if input() == "DEBUG": #可以考虑后面重写
    #     agentmain.debug_mode = True
    #     agentlala.debug_mode = True
    #     agentlili.debug_mode = True
    #     agentmain_response = agentmain.get_completion()
    #     lala_response = agentlala.get_completion()
    #     lili_response = agentlili.get_completion()
    #     print("\nCici response:")
    #     print(agentmain_response)
    #     print("\nLala response:")
    #     print(lala_response)
    #     print("\nLili response:")
    #     print(lili_response)
    #     agentmain.debug_mode = False
    #     agentlala.debug_mode = False
    #     agentlili.debug_mode = False
