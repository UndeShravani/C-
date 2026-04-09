from selenium import webdriver
from selenium.webdriver.common.by import By 
from selenium.webdriver.common.action_chains import ActionChains
import time
driver = webdriver.Chrome()
driver.get("https://demoqa.com/buttons")
time.sleep(3)

a = driver.find_element(By.ID, "rightClickBtn")
b = driver.find_element(By.ID, "doubleClickBtn")


action = ActionChains(driver)

action.context_click(a).perform()
print("Right Clicked")
time.sleep(3)

action.double_click(b).perform()
print("Double Clicked")
time.sleep(3)

driver.get("https://www.google.com")
a = driver.find_element(By.NAME, "q")
action.send_keys("Selenium").perform()
time.sleep(5)
driver.quit()
