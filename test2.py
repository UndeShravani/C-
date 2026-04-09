from selenium import webdriver
from selenium.webdriver.common.by import By
import time
driver = webdriver.Chrome()
driver.get("https://demoqa.com/text-box")
time.sleep(5)
a = driver.find_element(By.ID, "userName")
a.send_keys("Shravani")
a = driver.find_element(By.ID, "userEmail")
a.send_keys("test@gmail.com")
a = driver.find_element(By.ID, "currentAddress")
a.send_keys("Pune")
a = driver.find_element(By.ID, "permanentAddress")
a.send_keys("Maharashtra")
driver.find_element(By.ID, "submit").click()
time.sleep(5)
driver.quit()