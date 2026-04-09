from selenium import webdriver
from selenium.webdriver.common.by import By 
import time
driver = webdriver.Chrome()
driver.get("https://demoqa.com/webtables")
time.sleep(3)
rows = driver.find_elements(By.XPATH, "//div[@role='row' ]")
for r in rows:
    print(r.text)
print("Table data extracted")
time.sleep(3)
driver.quit()