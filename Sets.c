class StartSetsPlayersConfig
{	
	void StartSetsPlayer(PlayerBase player,int use_set_id)
	{
		EntityAI itemCreated = NULL;
		EntityAI itemCreated1 = NULL;
		ItemBase itemCasted = NULL;
		
		switch( use_set_id ) //Раздаем лут (можно использовать значения от 1 и выше, только не 0 и не -1)
		{
			case 4: //Set with number 1 (Сет с номером 1 в магазине черный охотник)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("TacticalShirt_Black"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("CargoPants_Black");
				itemCreated = player.GetInventory().CreateInInventory("WitchHood_Black");
				itemCreated = player.GetInventory().CreateInInventory("dzn_highcapacityvest_nac");
				itemCreated = player.GetInventory().CreateInInventory("BalaclavaMask_Black");
				itemCreated = player.GetInventory().CreateInInventory("OMNOGloves_Gray");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;	
				break;
			}
			
			case 5: //Set with number 2  (Сет с номером 2 сумрак)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("dzn_sumrak_up_coldw"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("dzn_sumrak_pants_coldw");
				itemCreated = player.GetInventory().CreateInInventory("dzn_sumrakhood_coldw");
				itemCreated = player.GetInventory().CreateInInventory("dzn_ukassvest_white");
				itemCreated = player.GetInventory().CreateInInventory("BalaclavaMask_Green");
				itemCreated = player.GetInventory().CreateInInventory("OMNOGloves_Gray");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;	
				break;
			}
			
			case 6: //Set with number 3   (Сет с номером 3 егерь в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("dzn_yeger_up_woodl"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("dzn_yeger_pants_woodl");
				itemCreated = player.GetInventory().CreateInInventory("dzn_yegerhood_woodl");
				itemCreated = player.GetInventory().CreateInInventory("UKAssVest_Camo");
				itemCreated = player.GetInventory().CreateInInventory("BalaclavaMask_Green");
				itemCreated = player.GetInventory().CreateInInventory("OMNOGloves_Gray");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 7: //Set with number 4   (Сет с номером 0)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Com_Shirt_REID"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Com_CP_REID");
				itemCreated = player.GetInventory().CreateInInventory("Com_PressV_REID");
				itemCreated = player.GetInventory().CreateInInventory("Com_Balaclava_REID");
				itemCreated = player.GetInventory().CreateInInventory("OMNOGloves_Gray");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 8: //Set with number 8   (Сет с номером 5 магазин)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket2"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto2");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava12");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves1");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 9: //Set with number 9   (Сет с номером 6 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket3"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava12");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves4");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 10: //Set with number 9   (Сет с номером 7 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket4"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto5");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava12");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves4");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 11: //Set with number 9   (Сет с номером 8 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_Jaket13"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto13");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest14");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava11");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves14");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 12: //Set with number 9   (Сет с номером 9 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_jacket14"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto14");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava12");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves1");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 13: //Set with number 9   (Сет с номером 10 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket8"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto16");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest7");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves14");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 14: //Set with number 9   (Сет с номером 11 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket12"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto17");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest6");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava5");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves10");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 15: //Set with number 9   (Сет с номером 12 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto18");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava10");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves3");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 16: //Set with number 9   (Сет с номером 13  в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket15"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto20");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest12");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava15");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves13");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 17: //Set with number 9   (Сет с номером 14  в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket19"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto23");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest14");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava7");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves12");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 18: //Set with number 9   (Сет с номером 15  в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket20"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto25");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest17");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava18");
				itemCreated = player.GetInventory().CreateInInventory("TacticalGloves_Beige");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			case 19: //Set with number 9   (Сет с номером 16  в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket17"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto21");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest15");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava16");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves13");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			case 20: //Set with number 9   (Сет с номером 12 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto18");
				itemCreated = player.GetInventory().CreateInInventory("WitchHood_Black");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava10");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves3");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			case 21: //Set with number 9   (Сет с номером 12 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("S_N_kurtka_universal"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Elena_CP_REID");
				itemCreated = player.GetInventory().CreateInInventory("S_N_witchhood_universal");
				itemCreated = player.GetInventory().CreateInInventory("S_N_Pressak_universal");
				itemCreated = player.GetInventory().CreateInInventory("Elena_Balac_REID");
				itemCreated = player.GetInventory().CreateInInventory("OMNOGloves_Gray");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			case 22: //Set with number 12 с капюшоном   (Сет с номером 12 в магазине)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_pants_leto18");
				itemCreated = player.GetInventory().CreateInInventory("WitchHood_Black");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Vest4");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_balaclava10");
				itemCreated = player.GetInventory().CreateInInventory("Zakat_TacticalGloves3");
				itemCreated = player.GetInventory().CreateInInventory("CombatBoots_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;
				break;
			}
			
			default: //Default starting spawn set (Сет поумолчанию для всех игроков, если хотите назначить - добавляйте здесь!)
			{
				//My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
			itemCreated = player.FindAttachmentBySlotName( "Body" );
			if ( itemCreated )
				{		
				itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}	
					itemCreated1 = NULL;					
				}					
				
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;					
				
				/* DefaultSets(player); */
				break;
			}
		}
	}
	
	void SetRandomHealthItem(EntityAI itemCreated) // Функция генерирует и применяет для предмета рандомное значение здоровья!
	{
		if ( itemCreated )
		{
			private int rndHlt = Math.RandomInt(55,6);
			itemCreated.SetHealth("90","100",rndHlt);
		}
	}
	
	 void DefaultSets(PlayerBase player) // Функция выдает сеты игрокам, не прописанным в конфигурации скрипта!!!
	{
		EntityAI itemCreated = NULL;
		EntityAI itemCreated1 = NULL;
		ItemBase itemCasted = NULL;
		
		private int random_set_number = Math.RandomIntInclusive(1,3); // генерируем рандом номер сета от 1 до 6 включительно (по значениям блоков case ниже)
		switch( random_set_number ) //Раздаем лут (можно использовать значения от 1 и выше, только не 0 и не -1)
		{
			case 1: //Set with number 1 (Сет с номером 1)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Jeans_Black");
				itemCreated = player.GetInventory().CreateInInventory("Sneakers_Blackа");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;			
				break;
			}
			
			case 2: //Set with number 2  (Сет с номером 2)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test2"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Jeans_Black");
				itemCreated = player.GetInventory().CreateInInventory("Sneakers_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;	
				break;
			}
			
			case 3: //Set with number 3   (Сет с номером 3)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test3"); 	// Выдаем рюкзак и записываем в переменную itemCreated
				if (itemCreated)															// Проверяем, создался ли рюкзак. Если он создался, переменная itemCreated будет не пуста и проверка пройдет
				{
					SetRandomHealthItem(itemCreated);												// Выдаем рюкзаку рандомное качество
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// Добавляем в инвентарь созданного рюкзака яблоко и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создалось ли яблоко в рюкзаке, яблоко у нас с переменной itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// Выдаем яблоку рандомное качество
					}
					itemCreated1 = NULL;															// Обнуляем значение переменной после работы с ней, чтобы следующая проверка прошла корректно
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// Выдаем игроку бинты в рюкзак и записываем в переменную itemCreated1
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(4);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);												// Выдаем бинтам рандомное качество, функция работает с классом EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// Проверяем, создались ли бинты в рюкзаке, они у нас с переменной itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// Выполняем преобразование в другой класс для работы с нужной нам функцией, 
						itemCasted.SetQuantity(10);														// Определяем количество для созданных бинтов как 4 штуки
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("S_N_CanvasPants_black");
				itemCreated = player.GetInventory().CreateInInventory("Sneakers_Black");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;	
				break;
			}
			
			
			
			default: //Default starting spawn set (Сет поумолчанию для всех игроков, в случае если ни один из сетов выше не выпал.
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // Чтобы удалить с персонажа уже имеющиеся стандартные стартовые шмотки раскомментировать строку
			}
		}
	} */
}