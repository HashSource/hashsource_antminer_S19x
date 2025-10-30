int __fastcall sub_A60C8(_DWORD *a1, int a2)
{
  int v4; // r0
  size_t v5; // r11
  void *v6; // r8
  int v7; // r9
  int v8; // r10
  int v9; // r0
  int v10; // r6
  int v12; // r3
  int v13; // r3
  int v14; // [sp+18h] [bp-9Ch]
  int v15; // [sp+1Ch] [bp-98h]
  int v16; // [sp+20h] [bp-94h]
  int v17; // [sp+24h] [bp-90h]
  int v18; // [sp+28h] [bp-8Ch]
  int v19; // [sp+2Ch] [bp-88h]
  _BYTE v20[64]; // [sp+30h] [bp-84h] BYREF
  _BYTE v21[68]; // [sp+70h] [bp-44h] BYREF

  v4 = sub_86508((int)a1);
  v5 = sub_D8C78(v4);
  if ( a1[7] == a2 )
    v6 = a1 + 195;
  else
    v6 = a1 + 179;
  if ( a2 )
  {
    a1[24] = 1;
    v14 = (int)(a1 + 252);
    v15 = a1[251];
    sub_7D42C((int)(a1 + 404));
  }
  else
  {
    v14 = (int)(a1 + 244);
    v15 = a1[243];
    sub_7D420((int)(a1 + 404));
  }
  v7 = sub_86508((int)a1);
  v8 = *(_DWORD *)(a1[31] + 560);
  v9 = sub_D8C78(v7);
  if ( v9 < 0 )
  {
    sub_95494(a1, 80, 514, 6, (int)"ssl/tls13_enc.c", 377);
  }
  else if ( sub_A5334(a1, v7, (int)v6, (int)"traffic upd", 0xBu, 0, v9, (int)v20, v9, 1) )
  {
    v16 = sub_D8AD0(v8);
    if ( (sub_D8928(v8) & 0xF0007) == 7 )
    {
      v12 = *(_DWORD *)(a1[31] + 528);
      if ( !v12 )
      {
        v12 = *(_DWORD *)(a1[285] + 440);
        if ( !v12 )
        {
          v13 = a1[286];
          if ( !v13 || (v12 = *(_DWORD *)(v13 + 440)) == 0 )
          {
            sub_95494(a1, 80, 514, 6, (int)"ssl/tls13_enc.c", 404);
            goto LABEL_8;
          }
        }
      }
      if ( (*(_DWORD *)(v12 + 24) & 0x30000) != 0 )
      {
        v19 = 8;
        v17 = 12;
        v18 = 8;
      }
      else
      {
        v19 = 16;
        v17 = 12;
        v18 = 16;
      }
    }
    else
    {
      v19 = 0;
      v18 = 0;
      v17 = sub_D8940(v8);
    }
    if ( sub_A5578(a1, v7, (int)v20, (int)v21, v16) && sub_A55A4(a1, v7, (int)v20, v14, v17) )
    {
      if ( sub_D8440(v15, v8, 0, 0, 0, a2) > 0
        && sub_D83D4(v15, 9, v17, 0)
        && (!v18 || sub_D83D4(v15, 17, v19, 0))
        && sub_D8440(v15, 0, 0, (int)v21, 0, -1) > 0 )
      {
        v10 = 1;
        memcpy(v6, v20, v5);
        a1[24] = 0;
        goto LABEL_9;
      }
      sub_95494(a1, 80, 514, 6, (int)"ssl/tls13_enc.c", 428);
    }
  }
LABEL_8:
  v10 = 0;
  sub_E07F8((int)v21, 0x40u);
LABEL_9:
  sub_E07F8((int)v20, 0x40u);
  return v10;
}
