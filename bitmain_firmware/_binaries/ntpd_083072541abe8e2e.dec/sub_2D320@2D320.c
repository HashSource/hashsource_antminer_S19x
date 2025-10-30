int __fastcall sub_2D320(int a1, int (__fastcall *a2)(int), int a3, int a4)
{
  int v8; // r4
  unsigned __int8 *v9; // r4
  unsigned __int8 *v10; // r11
  int v11; // r4
  int v12; // r3
  unsigned __int8 *v13; // r4
  char *v14; // r1
  int v16; // r0
  unsigned __int8 *v17; // r4
  char *v18; // r1
  __int64 v19; // [sp+8h] [bp-84h] BYREF
  char *v20; // [sp+14h] [bp-78h] BYREF
  __int64 v21; // [sp+18h] [bp-74h] BYREF
  __int64 v22; // [sp+20h] [bp-6Ch] BYREF
  _WORD v23[6]; // [sp+28h] [bp-64h] BYREF
  _BYTE v24[4]; // [sp+34h] [bp-58h] BYREF
  char v25; // [sp+38h] [bp-54h]
  char v26; // [sp+39h] [bp-53h]
  __int16 v27; // [sp+3Ah] [bp-52h]
  char v28; // [sp+3Ch] [bp-50h]
  __int64 v29; // [sp+40h] [bp-4Ch] BYREF
  int v30; // [sp+48h] [bp-44h]
  __int16 v31; // [sp+4Ch] [bp-40h]
  char v32; // [sp+4Eh] [bp-3Eh]
  unsigned __int8 v33; // [sp+50h] [bp-3Ch] BYREF
  char v34; // [sp+51h] [bp-3Bh]
  unsigned __int8 v35[50]; // [sp+52h] [bp-3Ah] BYREF

  sub_2D2B0((_DWORD *)a1);
  if ( a4 && sub_6568C(v23) )
  {
    v23[0] -= 10;
    sub_667B4(&v19, v23);
    v22 = v19;
  }
  else
  {
    v22 = 0;
  }
  while ( sub_2D014(a2, a3, &v33) )
  {
    v8 = v33;
    if ( v33 == 35 )
    {
      if ( v34 == 64 )
      {
        v17 = sub_2C9CC(v35);
        sub_6D854(&v19, v17, &v20, 10);
        v18 = v20;
        *(_QWORD *)(a1 + 24) = v19;
        if ( sub_2CA3C(v17, v18) )
          goto LABEL_16;
        *(_DWORD *)a1 = *(_DWORD *)(a1 + 24);
      }
      else if ( v34 == 36 )
      {
        v13 = sub_2C9CC(v35);
        sub_6D854(&v19, v13, &v20, 10);
        v14 = v20;
        *(_QWORD *)(a1 + 16) = v19;
        if ( sub_2CA3C(v13, v14) )
        {
LABEL_16:
          *_errno_location() = 84;
          sub_2D2B0((_DWORD *)a1);
          return 0;
        }
      }
    }
    else if ( ((*_ctype_b_loc())[v8] & 0x800) != 0 )
    {
      sub_6D854(&v19, &v33, &v20, 10);
      v9 = (unsigned __int8 *)v20;
      v21 = v19;
      if ( sub_2CA3C(&v33, v20) )
        goto LABEL_16;
      v10 = sub_2C9CC(v9);
      v11 = strtol((const char *)v10, &v20, 10);
      if ( sub_2CA3C(v10, v20) || (unsigned int)(v11 + 0x8000) >= 0x10000 )
        goto LABEL_16;
      if ( sub_6DAF4(&v21, &v22) < 0 )
      {
        *(_WORD *)(a1 + 34) = v11;
        goto LABEL_12;
      }
      if ( *(_WORD *)(a1 + 32) )
      {
        v16 = sub_6DAF4(&v21, a1 + 80);
        if ( !v16 )
        {
          if ( v11 != *(__int16 *)(a1 + 92) )
            goto LABEL_32;
          goto LABEL_12;
        }
        if ( v16 < 0 )
        {
LABEL_32:
          *_errno_location() = 34;
          goto LABEL_26;
        }
      }
      sub_666D8(v24, &v21);
      if ( v26 != 1 || v27 || v28 )
      {
        *_errno_location() = 22;
LABEL_26:
        sub_2D2B0((_DWORD *)a1);
        return 0;
      }
      --v25;
      sub_667B4(&v19, v24);
      v31 = v11;
      v32 = 0;
      v30 = v21 - v19;
      v29 = v21;
      if ( !sub_2CAC4(a1, (int)&v29) )
        goto LABEL_26;
LABEL_12:
      v12 = v21;
      *(_WORD *)(a1 + 8) = v11;
      *(_DWORD *)(a1 + 4) = v12;
    }
  }
  return 1;
}
