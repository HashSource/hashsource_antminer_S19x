int __fastcall sub_171258(_DWORD *a1)
{
  char *v1; // r12
  int v3; // r5
  int v4; // r3
  _DWORD *v5; // r4
  int v6; // r3
  int v7; // r1
  int v8; // r2
  int v9; // r9
  int v10; // r0
  int v11; // r3
  int v12; // r3
  int result; // r0
  int v14; // r1
  int v15; // r0
  int v16; // r12
  int v17; // r2
  int v18; // r1
  int v19; // r0
  _BYTE *v20; // r2
  char v21; // r1
  __int16 *v22; // r3
  _DWORD v23[3]; // [sp+8h] [bp-Ch] BYREF

  v1 = (char *)a1[6];
  v3 = a1[4];
  v4 = *v1;
  if ( v4 == 23 )
  {
    v5 = a1;
    while ( 1 )
    {
      if ( *((_DWORD *)v1 + 5) )
      {
        v5 = *(_DWORD **)(v5[6] + 20);
      }
      else
      {
        if ( dword_4896C0 )
          goto LABEL_57;
        v7 = *((_DWORD *)v1 + 3);
        if ( !v7 )
        {
          v7 = *((_DWORD *)v1 + 2);
          if ( !v7 )
            goto LABEL_15;
        }
        sub_21D6B0(v23, v7, 0, 2, 0);
        if ( v23[0] )
        {
          v8 = v5[6];
          v5 = *(_DWORD **)(v23[0] + 24);
          *(_DWORD *)(v8 + 20) = v5;
        }
        else
        {
          v9 = v5[6];
          if ( (*(_BYTE *)(v9 + 2) & 0x10) != 0 )
          {
            sub_1B7250(*(_DWORD *)(v9 + 16));
            v9 = v5[6];
          }
          v10 = ((int (*)(void))loc_16FED4)();
          v11 = v5[6];
          *(_DWORD *)(v9 + 20) = v10;
          v5 = *(_DWORD **)(v11 + 20);
        }
      }
      v6 = v5[4];
      v1 = (char *)v5[6];
      if ( (v3 & 0xC) != 0 )
        v6 &= 0xFFFFFFF3;
      if ( (v3 & 0x30) != 0 )
        v6 &= 0xFFFFFFCF;
      v3 |= v6;
      v4 = *v1;
      if ( v4 != 23 )
        goto LABEL_22;
    }
  }
  v5 = a1;
LABEL_22:
  if ( (unsigned __int8)(v4 - 3) <= 1u && !*((_WORD *)v1 + 2) )
  {
    if ( (*((_WORD *)v1 + 1) & 0x380) != 0x80 || (v22 = (__int16 *)*((_DWORD *)v1 + 7), v22 == &word_3B4A2C) || !v22[2] )
    {
      if ( (*(_DWORD *)v1 & 0x20400) != 0x20000 && dword_46D4B0 )
      {
        if ( dword_4896C0 )
          goto LABEL_24;
        if ( *((_DWORD *)v1 + 3) || *((_DWORD *)v1 + 2) )
        {
          v15 = sub_21D9EC();
          if ( v15 )
          {
            v12 = *(_DWORD *)(v15 + 24);
            v16 = v5[6];
            v18 = *(_BYTE *)(v12 + 2) & 0x10;
            v17 = *(_BYTE *)(v16 + 2) & 0x10;
            if ( (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
            {
LABEL_41:
              v18 = *(_DWORD *)(v12 + 16);
              if ( !v17 )
              {
LABEL_42:
                if ( v17 != v18 )
                {
                  v5 = (_DWORD *)v15;
                  goto LABEL_25;
                }
                goto LABEL_44;
              }
LABEL_32:
              v17 = *(_DWORD *)(v16 + 16);
              goto LABEL_42;
            }
LABEL_31:
            if ( !v17 )
            {
LABEL_44:
              v5 = (_DWORD *)((int (*)(void))loc_16FB94)();
              goto LABEL_24;
            }
            goto LABEL_32;
          }
          goto LABEL_24;
        }
LABEL_15:
        if ( dword_47AC88 > 0 )
          sub_F43B4(&off_46D334, "stub type has NULL name");
LABEL_57:
        JUMPOUT(0x16FB94);
      }
    }
  }
  if ( (v1[1] & 4) == 0 || dword_4896C0 )
    goto LABEL_24;
  v14 = *((_DWORD *)v1 + 3);
  if ( !v14 )
  {
    v14 = *((_DWORD *)v1 + 2);
    if ( !v14 )
      goto LABEL_15;
  }
  sub_21D6B0(v23, v14, 0, 2, 0);
  if ( v23[0] )
  {
    v15 = *(_DWORD *)(v23[0] + 24);
    v16 = v5[6];
    v12 = *(_DWORD *)(v15 + 24);
    v17 = *(_BYTE *)(v16 + 2) & 0x10;
    v18 = *(_BYTE *)(v12 + 2) & 0x10;
    if ( (*(_BYTE *)(v12 + 2) & 0x10) != 0 )
      goto LABEL_41;
    goto LABEL_31;
  }
LABEL_24:
  v12 = v5[6];
LABEL_25:
  if ( (*(_BYTE *)(v12 + 1) & 8) != 0 )
  {
    v19 = sub_171258(*(_DWORD *)(v12 + 20));
    if ( (*(_BYTE *)(*(_DWORD *)(v19 + 24) + 1) & 0xC) == 0 )
    {
      v20 = (_BYTE *)v5[6];
      if ( *v20 == 12 )
      {
        v21 = v20[1] & 0xF7;
        v5[5] = *(_DWORD *)(v19 + 20);
        v20[1] = v21;
      }
    }
  }
  result = ((int (__fastcall *)(_DWORD *, int, _DWORD))loc_16FB94)(v5, v3, 0);
  a1[5] = *(_DWORD *)(result + 20);
  return result;
}
