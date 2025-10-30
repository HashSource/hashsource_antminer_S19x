int __fastcall sub_5DB98(int a1, unsigned __int8 a2, unsigned __int8 a3, void *a4, int a5)
{
  int v5; // r3
  int v6; // r3
  int v7; // r3
  int v8; // r3
  int v9; // r0
  int v10; // r0
  size_t v11; // r3
  char v17[4]; // [sp+20h] [bp-824h] BYREF
  int v18; // [sp+820h] [bp-24h] BYREF
  int v19; // [sp+824h] [bp-20h]
  char v20; // [sp+828h] [bp-1Ch]
  void *ptr; // [sp+82Ch] [bp-18h]
  size_t size; // [sp+830h] [bp-14h]
  char v23; // [sp+835h] [bp-Fh]
  __int16 v24; // [sp+836h] [bp-Eh]
  unsigned __int16 v25; // [sp+838h] [bp-Ch]
  _BYTE v26[6]; // [sp+83Ah] [bp-Ah]
  int v27; // [sp+848h] [bp+4h]

  *(_WORD *)&v26[4] = 0;
  pthread_mutex_lock(&stru_536318);
  v24 = 0;
  v23 = 7;
  v18 = 906472021;
  v20 = 0;
  size = a5 + 5;
  ptr = malloc(a5 + 5);
  *(_DWORD *)v26 = (unsigned __int16)(a2 + 7 + a3 + 54);
  v19 = a2;
  v25 = 6;
  BYTE1(v19) = a3;
  v5 = a5;
  if ( a5 >= 16 )
    v5 = 16;
  v27 = v5;
  v6 = v25++;
  *((_BYTE *)&v18 + v6) = v27;
  *(_WORD *)v26 += v27;
  v7 = v25++;
  *((_BYTE *)&v18 + v7) = v26[1];
  v8 = v25++;
  *((_BYTE *)&v18 + v8) = v26[0];
  v9 = sub_6F0DC(a1, &v18, v25);
  if ( v9 == v25 )
  {
    usleep(0x493E0u);
    v10 = sub_6F030(a1, ptr, size);
    if ( v10 == size )
    {
      if ( *((_BYTE *)ptr + 1) == 54 && *((_BYTE *)ptr + 2) == 1 && *(unsigned __int8 *)ptr == size )
      {
        v25 = 0;
        *(_WORD *)v26 = 0;
        while ( v25 < (int)(size - 2) )
          *(_WORD *)v26 += *((unsigned __int8 *)ptr + v25++);
        if ( v26[1] == *((unsigned __int8 *)ptr + size - 2) && v26[0] == *((unsigned __int8 *)ptr + size - 1) )
        {
          v11 = v27;
          if ( v27 >= 16 )
            v11 = 16;
          *(_DWORD *)&v26[2] = v11;
          memcpy(a4, (char *)ptr + 3, v11);
          *(_DWORD *)&v26[2] = v27;
        }
        else
        {
          snprintf(v17, 0x800u, "%s failed 2!\n", "_app_read_data_from_flash_1704_v8");
          sub_3B6AC(0, v17, 0, (int)v17);
          sub_5D4C0("read return data", (unsigned __int8 *)ptr, size);
        }
      }
      else
      {
        snprintf(
          v17,
          0x800u,
          "%s failed !\n read_back_data[0] = 0x%x, read_back_data[1] = 0x%x, read_back_data[2] = 0x%x\n",
          "_app_read_data_from_flash_1704_v8",
          *(unsigned __int8 *)ptr,
          *((unsigned __int8 *)ptr + 1),
          *((unsigned __int8 *)ptr + 2));
        sub_3B6AC(0, v17, 0, (int)v17);
        sub_5D4C0("read return data", (unsigned __int8 *)ptr, size);
      }
    }
    else
    {
      snprintf(v17, 0x800u, "%s read iic 2 err\n", "_app_read_data_from_flash_1704_v8");
      sub_3B6AC(0, v17, 0, (int)v17);
    }
  }
  else
  {
    snprintf(v17, 0x800u, "%s write iic 2 err\n", "_app_read_data_from_flash_1704_v8");
    sub_3B6AC(0, v17, 0, (int)v17);
  }
  free(ptr);
  pthread_mutex_unlock(&stru_536318);
  return *(_DWORD *)&v26[2];
}
