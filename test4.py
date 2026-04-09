from selenium import webdriver
from selenium.webdriver.common.by import By 
import time
driver = webdriver.Chrome()
driver.get("https://demoqa.com/alerts")
time.sleep(3)
driver.find_element(By.ID, "alertButton").click()
time.sleep(3)

alert = driver.switch_to.alert
alert.accept()
time.sleep(3)
print("Alert handled successfully")

driver.quit()