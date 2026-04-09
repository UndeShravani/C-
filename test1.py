from selenium import webdriver
from selenium.webdriver.common.by import By
import time
driver = webdriver.Chrome()
driver.get("https://google.com")
time.sleep(5)

a = driver.find_element(By.ID, "APjFqb")
a.send_keys("Selenium")
time.sleep(3)

a = driver.find_element(By.XPATH, "//textarea[@id='APjFqb']")
a.send_keys("Python")
a.clear()
time.sleep(3)

a = driver.find_element(By.CSS_SELECTOR, "textarea#APjFqb")
a.clear()
a.send_keys("Automation")
time.sleep(3)

driver.quit()