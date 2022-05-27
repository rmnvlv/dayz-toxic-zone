class StartSetsPlayersConfig
{	
	void StartSetsPlayer(PlayerBase player,int use_set_id)
	{
		EntityAI itemCreated = NULL;
		EntityAI itemCreated1 = NULL;
		ItemBase itemCasted = NULL;
		
		switch( use_set_id ) //������� ��� (����� ������������ �������� �� 1 � ����, ������ �� 0 � �� -1)
		{
			case 4: //Set with number 1 (��� � ������� 1 � �������� ������ �������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("TacticalShirt_Black"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 5: //Set with number 2  (��� � ������� 2 ������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("dzn_sumrak_up_coldw"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 6: //Set with number 3   (��� � ������� 3 ����� � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("dzn_yeger_up_woodl"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 7: //Set with number 4   (��� � ������� 0)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Com_Shirt_REID"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 8: //Set with number 8   (��� � ������� 5 �������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket2"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 9: //Set with number 9   (��� � ������� 6 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket3"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 10: //Set with number 9   (��� � ������� 7 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket4"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 11: //Set with number 9   (��� � ������� 8 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_Jaket13"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 12: //Set with number 9   (��� � ������� 9 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_Gorka_jacket14"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 13: //Set with number 9   (��� � ������� 10 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket8"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 14: //Set with number 9   (��� � ������� 11 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket12"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 15: //Set with number 9   (��� � ������� 12 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 16: //Set with number 9   (��� � ������� 13  � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket15"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 17: //Set with number 9   (��� � ������� 14  � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket19"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 18: //Set with number 9   (��� � ������� 15  � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket20"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 19: //Set with number 9   (��� � ������� 16  � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket17"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			case 20: //Set with number 9   (��� � ������� 12 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			case 21: //Set with number 9   (��� � ������� 12 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("S_N_kurtka_universal"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			case 22: //Set with number 12 � ���������   (��� � ������� 12 � ��������)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Zakat_HikingJacket13"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			default: //Default starting spawn set (��� ����������� ��� ���� �������, ���� ������ ��������� - ���������� �����!)
			{
				//My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
			itemCreated = player.FindAttachmentBySlotName( "Body" );
			if ( itemCreated )
				{		
				itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
	
	void SetRandomHealthItem(EntityAI itemCreated) // ������� ���������� � ��������� ��� �������� ��������� �������� ��������!
	{
		if ( itemCreated )
		{
			private int rndHlt = Math.RandomInt(55,6);
			itemCreated.SetHealth("90","100",rndHlt);
		}
	}
	
	 void DefaultSets(PlayerBase player) // ������� ������ ���� �������, �� ����������� � ������������ �������!!!
	{
		EntityAI itemCreated = NULL;
		EntityAI itemCreated1 = NULL;
		ItemBase itemCasted = NULL;
		
		private int random_set_number = Math.RandomIntInclusive(1,3); // ���������� ������ ����� ���� �� 1 �� 6 ������������ (�� ��������� ������ case ����)
		switch( random_set_number ) //������� ��� (����� ������������ �������� �� 1 � ����, ������ �� 0 � �� -1)
		{
			case 1: //Set with number 1 (��� � ������� 1)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);		
					}					
				}
				itemCreated = player.GetInventory().CreateInInventory("Jeans_Black");
				itemCreated = player.GetInventory().CreateInInventory("Sneakers_Black�");
				itemCreated = player.GetInventory().CreateInInventory("KitchenKnife");
				itemCreated = player.GetInventory().CreateInInventory("Lunchmeat");
				itemCreated = player.GetInventory().CreateInInventory("WaterBottle");
				itemCreated = player.GetInventory().CreateInInventory("Heatpack");				
				itemCreated = NULL;			
				break;
			}
			
			case 2: //Set with number 2  (��� � ������� 2)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test2"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			case 3: //Set with number 3   (��� � ������� 3)
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
				itemCreated = player.GetInventory().CreateInInventory("Rubaxa_Silent_Test3"); 	// ������ ������ � ���������� � ���������� itemCreated
				if (itemCreated)															// ���������, �������� �� ������. ���� �� ��������, ���������� itemCreated ����� �� ����� � �������� �������
				{
					SetRandomHealthItem(itemCreated);												// ������ ������� ��������� ��������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("Apple");			// ��������� � ��������� ���������� ������� ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ������ � �������, ������ � ��� � ���������� itemCreated1
					{
						SetRandomHealthItem(itemCreated1);												// ������ ������ ��������� ��������
					}
					itemCreated1 = NULL;															// �������� �������� ���������� ����� ������ � ���, ����� ��������� �������� ������ ���������
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("BandageDressing");				// ������ ������ ����� � ������ � ���������� � ���������� itemCreated1
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(4);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
						SetRandomHealthItem(itemCreated);												// ������ ������ ��������� ��������, ������� �������� � ������� EntityAI
					}
					itemCreated1 = itemCreated.GetInventory().CreateInInventory("VitaminBottle");						
					if (itemCreated1)																// ���������, ��������� �� ����� � �������, ��� � ��� � ���������� itemCreated1
					{
						itemCasted = ItemBase.Cast(itemCreated1);										// ��������� �������������� � ������ ����� ��� ������ � ������ ��� ��������, 
						itemCasted.SetQuantity(10);														// ���������� ���������� ��� ��������� ������ ��� 4 �����
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
			
			
			
			default: //Default starting spawn set (��� ����������� ��� ���� �������, � ������ ���� �� ���� �� ����� ���� �� �����.
			{
				My_Custom_Spawn_Parameters.RemoveAllItems(player); // ����� ������� � ��������� ��� ��������� ����������� ��������� ������ ����������������� ������
			}
		}
	} */
}