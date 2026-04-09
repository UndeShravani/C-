from selenium import webdriver
from selenium.webdriver.common.by import By 
import time
driver = webdriver.Chrome()
driver.get("https://www.google.com")
time.sleep(3)
a = driver.find_element(By.NAME, "q")
a.send_keys("Selenium")
print("Element found using implicit wait")
time.sleep(5)
driver.quit()