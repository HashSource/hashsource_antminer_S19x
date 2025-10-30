int __fastcall sub_2DC90(int a1, int a2, int a3)
{
  int v5; // r5
  unsigned int v6; // r8
  unsigned __int16 v7; // r4
  unsigned int v8; // r3
  int v9; // r5
  unsigned int v12; // [sp+18h] [bp-8h] BYREF
  int v13; // [sp+1Ch] [bp-4h]
  char v14[2052]; // [sp+20h] [bp+0h] BYREF

  if ( (unsigned int)dword_9E31C > 4 )
  {
    snprintf(v14, 0x800u, "Dump core process monitor data register start. chain = %d, asic = %d\n", a1, a2);
    sub_47AB4(4, v14, 0);
  }
  pthread_mutex_lock(&stru_A0DB0);
  byte_138648 = 1;
  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v14, "Critical path chain.\n");
    sub_47AB4(4, v14, 0);
  }
  v5 = 0;
  sub_2D958(a1, a2, 1, 6);
  sub_2D8E4(a1, a2, 2);
  while ( 1 )
  {
    v12 = 0;
    ++v5;
    v13 = 0;
    sub_2A324(a1, a2, 0x40u, (int)&v12);
    v6 = HIWORD(v12);
    if ( !(_BYTE)v13 )
      break;
    v7 = v12;
    if ( (unsigned int)dword_9E31C > 4 )
    {
      snprintf(v14, 0x800u, "%8u", (unsigned __int16)v12);
      sub_47EC8(4, v14, 0);
    }
    *(_DWORD *)(a3 + 4 * v6) = v7;
    if ( (v5 & 0xF) != 0 || (unsigned int)dword_9E31C <= 4 )
    {
      if ( v5 == 96 )
        goto LABEL_13;
    }
    else
    {
      strcpy(v14, "\n");
      sub_47EC8(4, v14, 0);
      if ( v5 == 96 )
      {
LABEL_13:
        v8 = dword_9E31C;
        v9 = 0;
        goto LABEL_20;
      }
    }
  }
  if ( (unsigned int)dword_9E31C <= 3 )
  {
    v9 = -1;
    goto LABEL_17;
  }
  v9 = -1;
  snprintf(v14, 0x800u, "dump chain %u, asic %u, failed. found = %u\n", a1, a2, (unsigned __int8)v13);
  sub_47AB4(3, v14, 0);
  v8 = dword_9E31C;
LABEL_20:
  if ( v8 > 4 )
  {
    strcpy(v14, "\n");
    sub_47EC8(4, v14, 0);
  }
LABEL_17:
  sub_2D958(a1, a2, 1, 0);
  byte_138648 = 0;
  pthread_mutex_unlock(&stru_A0DB0);
  if ( (unsigned int)dword_9E31C > 4 )
  {
    strcpy(v14, "Dump core process monitor data register done.\n");
    sub_47AB4(4, v14, 0);
  }
  return v9;
}
