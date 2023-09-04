print("CONJETURA DE COLLATZ: \n\n ")
input_value = int(input("Enter a number: "))
num = input_value
steps = [num]
while num != 1:
  if num % 2 == 0:
      num //= 2
  else:
      num = num * 3 + 1
  steps.append(num)
print(f"Steps: {' -> '.join(map(str, steps))}")

print("\n\n CONSTANTE DE KAPREKAR: \n\n ")
def kaprekar_steps(numm):
  steps2 = []
  while numm != 6174:
   num_str = str(numm).zfill(4)
   num_arr = sorted(list(num_str))
   asc_num = int(''.join(num_arr))
   desc_num = int(''.join(num_arr[::-1]))
   numm = desc_num - asc_num
   steps2.append((desc_num, asc_num, numm))  
  return steps2
def kaprekar_constant(numm):
  steps2 = kaprekar_steps(numm)
  return steps2

input_value = int(input("Ingresa un número de 4 dígitos con al menos dos dígitos diferentes: "))

if 999 < input_value < 10000 and len(set(str(input_value))) > 1:
  steps2 = kaprekar_constant(input_value)
  print(f"La constante de Kaprekar para {input_value} es 6174.")
  print("Pasos:")
  for i, step in enumerate(steps2):
    desc_num, asc_num, result = step
    print(f"Paso {i + 1}: {desc_num} - {asc_num} = {result}")
else:
  print("Por favor ingresa un número válido de 4 dígitos con al menos dos dígitos diferentes.")


print("\n\n MULTIPLICACIÓN EGIPCIA: \n\n ")
num1 = int(input("Ingresa el primer número: "))
num2 = int(input("Ingresa el segundo número: "))
resultado = 0
steps3 = []
a = num1
b = num2
while a >= 1:
  if a % 2 == 1:
    steps3.append(f"{a} x {b} = {a * b}")
    resultado += b
  a = a // 2
  b *= 2
steps_text = '\n'.join(steps3)
print(f"Pasos:\n{steps_text}\nResultado: {resultado}")


print("\n\n MULTIPLICACIÓN RUSA: \n\n ")

nume1 = int(input("Ingresa el primer número: "))
nume2 = int(input("Ingresa el segundo número: "))
resultt = 0
steps4 = []
a2 = nume1
b2 = nume2
while a2 > 0:
  if a2 % 2 == 1:
    steps4.append(f"{a2} x {b2} = {a2 * b2}")
    resultt += b2
  a2 = a2 // 2
  b2 *= 2

steps_text = '\n'.join(steps4)
print(f"Pasos:\n{steps_text}\nResultado: {resultt}") 



