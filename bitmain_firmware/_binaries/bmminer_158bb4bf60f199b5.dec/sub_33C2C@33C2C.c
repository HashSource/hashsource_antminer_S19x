int __fastcall sub_33C2C(int a1, int a2)
{
  _DWORD *v4; // r1
  int v5; // r12
  int v6; // r1
  int v7; // r8
  int i; // r4
  _DWORD v10[10]; // [sp+0h] [bp-82Ch] BYREF
  char v11[2052]; // [sp+28h] [bp-804h] BYREF

  memset(v10, 0, sizeof(v10));
  if ( (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v11, "Build tuning basic config.\n");
    sub_47AB4(3, v11, 0);
  }
  v4 = *(_DWORD **)(a1 + 4);
  v10[0] = **(_DWORD **)a1;
  v10[1] = *v4;
  v5 = v4[5];
  v10[2] = v4[1];
  v6 = v4[2];
  v10[4] = v5;
  v10[3] = v6;
  LOWORD(v10[5]) = *(_WORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 8);
  v10[6] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 12);
  v10[7] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 16);
  v10[8] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 20);
  v10[9] = *(_DWORD *)(*(_DWORD *)(dword_1AEA6C + 8) + 28);
  v7 = sub_39F80(v10);
  if ( v7 && (unsigned int)dword_9E31C > 3 )
  {
    strcpy(v11, "Do freq tuning basic failed.\n");
    sub_47AB4(3, v11, 0);
  }
  for ( i = 0; i != 16; ++i )
  {
    while ( 1 )
    {
      if ( *(_DWORD *)(dword_A0D68 + 4 * i + 4) == 1 )
      {
        if ( sub_39B70(i) )
        {
          *(_DWORD *)(a2 + 4 * i) = sub_39B88(i);
          goto LABEL_7;
        }
        *(_DWORD *)(a2 + 4 * i) = v10[1];
        if ( (unsigned int)dword_9E31C > 3 )
          break;
      }
LABEL_7:
      if ( ++i == 16 )
        return v7;
    }
    strcpy(v11, "Freq result is invalid, using freq_base as default.\n");
    sub_47AB4(3, v11, 0);
  }
  return v7;
}
