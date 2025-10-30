int __fastcall sub_1BEC4(int a1)
{
  int v1; // r5
  _BOOL4 v2; // r0
  int v3; // r0
  int v4; // r4
  unsigned int v6; // r7
  const char *v7; // r0
  int v8; // r0
  int v9; // r3
  const char *v10; // r0
  int v11; // r7
  unsigned int v12; // r9
  int v13; // r8
  int v14; // r8
  char *v15; // r0
  unsigned __int8 v16; // r3
  const char *v17; // r0
  int v18; // r3
  int v19; // [sp+0h] [bp-1Ch] BYREF
  int v20; // [sp+4h] [bp-18h] BYREF
  int v21; // [sp+8h] [bp-14h]
  int v22; // [sp+Ch] [bp-10h]
  int v23; // [sp+10h] [bp-Ch]
  int v24; // [sp+14h] [bp-8h]

  v1 = sub_1A8A8() + a1;
  v2 = sub_1A598();
  if ( !v2 )
  {
    v2 = sub_1A67C();
    if ( !v2 || dword_B413C != 2 )
      goto LABEL_3;
LABEL_23:
    v7 = (const char *)sub_26510(v2);
    v8 = strcmp(v7, "BHB56902");
    if ( v8 )
    {
      v17 = (const char *)sub_26510(v8);
      if ( !strcmp(v17, "BHB56903") )
      {
        if ( sub_1A598() )
          v18 = 40;
        else
          v18 = 30;
        v1 += v18;
      }
    }
    else
    {
      if ( sub_1A598() )
        v9 = 30;
      else
        v9 = 20;
      v1 += v9;
    }
    goto LABEL_3;
  }
  if ( dword_B413C == 2 )
    goto LABEL_23;
LABEL_3:
  v3 = sub_40F20();
  v4 = dword_B413C;
  if ( v3 )
    v1 -= 15;
  if ( dword_B413C )
    return v1;
  if ( sub_1A760() )
    goto LABEL_8;
  v10 = (const char *)sub_26510(0);
  v11 = strcmp(v10, "BHB56902");
  if ( v11 )
    goto LABEL_8;
  v12 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19 = 20;
  do
  {
    if ( sub_266F0(v11) )
    {
      v13 = *(_DWORD *)(dword_B0F4C + 4 * v11);
      if ( (*(int (__fastcall **)(int))(v13 + 188))(v13) == 1390 )
      {
        (*(void (__fastcall **)(int, int *, int *, _DWORD, int, int, int, int, int, int))(v13 + 68))(
          v13,
          &v20,
          &v19,
          *(_DWORD *)(v13 + 68),
          v19,
          v20,
          v21,
          v22,
          v23,
          v24);
        v14 = (*(int (__fastcall **)(int))(v13 + 84))(v13);
        v15 = strstr((const char *)&v20, "C2");
        v16 = v12 + 1;
        if ( v15 )
        {
          if ( v14 <= 1 )
            goto LABEL_45;
LABEL_44:
          v12 = v16;
          goto LABEL_45;
        }
        v16 = v12 + 1;
        if ( v14 > 2 )
          goto LABEL_44;
      }
    }
LABEL_45:
    ++v11;
  }
  while ( v11 != 4 );
  if ( v12 > 1 )
    v1 -= 10;
LABEL_8:
  if ( sub_1A760() && (sub_1A598() || sub_1A67C()) )
    v1 += sub_1B464();
  if ( sub_1A804() && (sub_1A598() || sub_1A67C()) )
    v1 += sub_1BD80();
  if ( !sub_1A598() && !sub_1A67C() )
    return v1;
  v6 = 0;
  v21 = 0;
  v20 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v19 = 20;
  do
  {
    if ( sub_266F0(v4) )
    {
      (*(void (__fastcall **)(_DWORD, int *, int *, _DWORD, int, int))(*(_DWORD *)(dword_B0F4C + 4 * v4) + 68))(
        *(_DWORD *)(dword_B0F4C + 4 * v4),
        &v20,
        &v19,
        *(_DWORD *)(*(_DWORD *)(dword_B0F4C + 4 * v4) + 68),
        v19,
        v20);
      if ( strstr((const char *)&v20, "C1") )
        v6 = (unsigned __int8)(v6 + 1);
    }
    ++v4;
  }
  while ( v4 != 4 );
  if ( v6 <= 1 )
  {
    if ( (unsigned int)sub_1A420() > 0x234 )
      return v1;
    return v1 + 10;
  }
  else
  {
    if ( (unsigned int)sub_1A420() <= 0x234 )
    {
      v1 += 20;
      return v1;
    }
    if ( (unsigned int)sub_1A420() <= 0x24D )
      return v1 + 10;
    return v1;
  }
}
