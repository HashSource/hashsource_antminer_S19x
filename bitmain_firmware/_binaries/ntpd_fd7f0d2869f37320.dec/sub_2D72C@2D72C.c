int __fastcall sub_2D72C(int a1, int (__fastcall *a2)(int), int a3, int a4)
{
  int v8; // r4
  unsigned __int8 *v9; // r4
  unsigned __int8 *v10; // r11
  int v11; // r4
  int v12; // r0
  int v13; // r3
  unsigned __int8 *v14; // r4
  unsigned __int8 *v15; // r1
  int v17; // r3
  unsigned __int8 *v18; // r4
  unsigned __int8 *v19; // r1
  int v20; // r3
  double v21; // [sp+8h] [bp-84h] BYREF
  char *v22; // [sp+14h] [bp-78h] BYREF
  double v23; // [sp+18h] [bp-74h] BYREF
  double v24; // [sp+20h] [bp-6Ch] BYREF
  _WORD v25[6]; // [sp+28h] [bp-64h] BYREF
  _BYTE v26[4]; // [sp+34h] [bp-58h] BYREF
  char v27; // [sp+38h] [bp-54h]
  char v28; // [sp+39h] [bp-53h]
  __int16 v29; // [sp+3Ah] [bp-52h]
  char v30; // [sp+3Ch] [bp-50h]
  double v31; // [sp+40h] [bp-4Ch] BYREF
  int v32; // [sp+48h] [bp-44h]
  __int16 v33; // [sp+4Ch] [bp-40h]
  char v34; // [sp+4Eh] [bp-3Eh]
  unsigned __int8 v35; // [sp+50h] [bp-3Ch] BYREF
  char v36; // [sp+51h] [bp-3Bh]
  unsigned __int8 v37[50]; // [sp+52h] [bp-3Ah] BYREF

  sub_2D690(a1);
  if ( a4 && sub_666BC(v25) )
  {
    v25[0] -= 10;
    sub_677BC(&v21, v25);
    v24 = v21;
  }
  else
  {
    v24 = 0.0;
  }
  while ( sub_2D3B4(a2, a3, &v35) )
  {
    v8 = v35;
    if ( v35 == 35 )
    {
      if ( v36 == 64 )
      {
        v18 = sub_2CD38(v37);
        sub_6E828(&v21, v18, &v22, 10);
        v19 = (unsigned __int8 *)v22;
        *(double *)(a1 + 24) = v21;
        if ( sub_2CDA4(v18, v19) )
          goto LABEL_18;
        *(_DWORD *)a1 = *(_DWORD *)(a1 + 24);
      }
      else if ( v36 == 36 )
      {
        v14 = sub_2CD38(v37);
        sub_6E828(&v21, v14, &v22, 10);
        v15 = (unsigned __int8 *)v22;
        *(double *)(a1 + 16) = v21;
        if ( sub_2CDA4(v14, v15) )
        {
LABEL_18:
          *_errno_location() = 84;
          sub_2D690(a1);
          return 0;
        }
      }
    }
    else if ( ((*_ctype_b_loc())[v8] & 0x800) != 0 )
    {
      sub_6E828(&v21, &v35, &v22, 10);
      v9 = (unsigned __int8 *)v22;
      v23 = v21;
      if ( sub_2CDA4(&v35, (unsigned __int8 *)v22) )
        goto LABEL_18;
      v10 = sub_2CD38(v9);
      v11 = strtol((const char *)v10, &v22, 10);
      if ( sub_2CDA4(v10, (unsigned __int8 *)v22) || (unsigned int)(v11 + 0x8000) >= 0x10000 )
        goto LABEL_18;
      if ( sub_6EAC0(&v23, &v24) < 0 )
      {
        v17 = LODWORD(v23);
        *(_WORD *)(a1 + 34) = v11;
        *(_WORD *)(a1 + 8) = v11;
        *(_DWORD *)(a1 + 4) = v17;
      }
      else
      {
        if ( !*(_WORD *)(a1 + 32) )
          goto LABEL_20;
        v12 = sub_6EAC0(&v23, a1 + 80);
        if ( v12 )
        {
          if ( v12 < 0 )
          {
LABEL_31:
            *_errno_location() = 34;
            goto LABEL_22;
          }
LABEL_20:
          sub_676E0(v26, &v23);
          if ( v28 != 1 || v29 || v30 )
          {
            *_errno_location() = 22;
LABEL_22:
            sub_2D690(a1);
            return 0;
          }
          --v27;
          sub_677BC(&v21, v26);
          v33 = v11;
          v34 = 0;
          v31 = v23;
          v32 = LODWORD(v23) - LODWORD(v21);
          if ( !sub_2CE2C(a1, (int)&v31) )
            goto LABEL_22;
          v20 = LODWORD(v23);
          *(_WORD *)(a1 + 8) = v11;
          *(_DWORD *)(a1 + 4) = v20;
        }
        else
        {
          if ( v11 != *(__int16 *)(a1 + 92) )
            goto LABEL_31;
          v13 = LODWORD(v23);
          *(_WORD *)(a1 + 8) = v11;
          *(_DWORD *)(a1 + 4) = v13;
        }
      }
    }
  }
  return 1;
}
