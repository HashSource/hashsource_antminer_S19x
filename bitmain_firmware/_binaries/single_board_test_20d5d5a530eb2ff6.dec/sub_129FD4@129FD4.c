int __fastcall sub_129FD4(int a1, int *a2, int a3, int a4)
{
  int v5; // r4
  int v6; // r6
  unsigned int v8; // r3
  bool v9; // cc
  int v10; // r6
  int *v11; // r0
  unsigned int v12; // r11
  int v13; // r10
  int v14; // r9
  int v15; // r8
  int v16; // r4
  int v17; // r8
  char *v18; // r0
  bool v19; // zf
  int v20; // r2
  int v21; // r1
  int v22; // r0
  int v23; // r2
  char *v24; // r8
  int v25; // r9
  int v26; // r9
  int v27; // r4
  unsigned int i; // [sp+4h] [bp-A0h]
  int v29; // [sp+8h] [bp-9Ch]
  int v30; // [sp+Ch] [bp-98h]
  int *v31; // [sp+10h] [bp-94h]
  char *v32; // [sp+14h] [bp-90h]
  int v33; // [sp+18h] [bp-8Ch]
  int v34; // [sp+1Ch] [bp-88h]
  int v36; // [sp+28h] [bp-7Ch]
  char *v37; // [sp+2Ch] [bp-78h]
  char *v38; // [sp+34h] [bp-70h]
  int v39; // [sp+38h] [bp-6Ch]
  int v40; // [sp+44h] [bp-60h]
  char *v41; // [sp+48h] [bp-5Ch]
  int v42; // [sp+4Ch] [bp-58h]
  char v43[84]; // [sp+50h] [bp-54h] BYREF

  v33 = a4;
  if ( !a4 )
    return sub_115EA0(a1, a2);
  v5 = a3;
  if ( a3 < 0 )
  {
    v8 = a4 & 0xF0000;
    v5 = 0;
    v9 = v8 > 0x20000;
    if ( v8 != 0x20000 )
      goto LABEL_11;
  }
  else
  {
    if ( a3 && a1 )
    {
      v6 = 0;
      do
      {
        if ( sub_B69CC(a1, (int)&word_1E1C4C, 1) != 1 )
          return -1;
        ++v6;
      }
      while ( v5 != v6 );
      a4 = v33;
    }
    v8 = a4 & 0xF0000;
    v9 = v8 > 0x20000;
    if ( v8 != 0x20000 )
    {
LABEL_11:
      if ( v9 )
      {
        if ( v8 == 196608 )
        {
          v10 = 0;
          v39 = 3;
          v36 = 2;
          v41 = " + ";
          v38 = "; ";
        }
        else
        {
          if ( v8 != 0x40000 )
            return -1;
          v10 = v5;
          v39 = 3;
          v36 = 1;
          v41 = " + ";
          v38 = "\n";
        }
      }
      else
      {
        if ( v8 != 0x10000 )
          return -1;
        v39 = 1;
        v10 = 0;
        v36 = 1;
        v41 = "+";
        v38 = ",";
      }
      if ( (v33 & 0x800000) != 0 )
        goto LABEL_17;
LABEL_53:
      v37 = "=";
      v34 = 1;
      goto LABEL_18;
    }
  }
  v10 = 0;
  v41 = " + ";
  v39 = 3;
  v38 = ", ";
  v36 = 2;
  if ( (v33 & 0x800000) == 0 )
    goto LABEL_53;
LABEL_17:
  v34 = 3;
  v37 = " = ";
LABEL_18:
  v30 = v33 & 0x600000;
  v11 = sub_113C38(a2);
  if ( (int)v11 <= 0 )
    return v5;
  v12 = (unsigned int)v11 - 1;
  v13 = -1;
  v42 = v33 & 0x2000000;
  for ( i = 0; ; ++i )
  {
    if ( (v33 & 0x100000) != 0 )
      v14 = sub_113CB0(a2, v12);
    else
      v14 = sub_113CB0(a2, i);
    if ( v13 == -1 )
      goto LABEL_30;
    if ( sub_1141A8(v14) != v13 )
      break;
    if ( a1 && v39 != sub_B69CC(a1, (int)v41, v39) )
      return -1;
    v5 += v39;
LABEL_30:
    v13 = sub_1141A8(v14);
    v17 = sub_114120(v14);
    v31 = (int *)sub_114128(v14);
    v18 = sub_EAC84(v17);
    v32 = v18;
    if ( v30 == 6291456 )
      goto LABEL_43;
    v19 = v18 == 0;
    if ( v18 )
      v19 = v30 == 0x400000;
    v20 = v19;
    if ( v19 )
    {
      v23 = v17;
      v24 = v43;
      sub_EACFC(v43, 80, v23, 1);
      v25 = 0;
      v29 = strlen(v43);
    }
    else if ( v30 )
    {
      if ( v30 != 0x200000 )
      {
        if ( a1 )
        {
          v29 = sub_B69CC(a1, (int)&byte_1A4198, v20);
          if ( v29 )
            return -1;
          goto LABEL_41;
        }
        v29 = 0;
        goto LABEL_42;
      }
      v25 = 25;
      v24 = sub_EAB40((unsigned int)v18);
      v29 = strlen(v24);
    }
    else
    {
      v25 = 10;
      v24 = sub_EAAB4((unsigned int)v18);
      v29 = strlen(v24);
    }
    if ( a1 )
    {
      if ( v29 != sub_B69CC(a1, (int)v24, v29) )
        return -1;
      if ( v25 > v29 && v42 )
      {
LABEL_62:
        v26 = v25 - v29;
        if ( v26 > 0 && a1 )
        {
          v40 = v5;
          v27 = 0;
          while ( sub_B69CC(a1, (int)&word_1E1C4C, 1) == 1 )
          {
            if ( v26 == ++v27 )
            {
              v5 = v40;
              goto LABEL_68;
            }
          }
          return -1;
        }
LABEL_68:
        v5 += v26;
        if ( !a1 )
          goto LABEL_42;
      }
LABEL_41:
      if ( v34 != sub_B69CC(a1, (int)v37, v34) )
        return -1;
      goto LABEL_42;
    }
    if ( v25 > v29 && v42 )
      goto LABEL_62;
LABEL_42:
    v5 += v29 + v34;
LABEL_43:
    if ( v32 )
    {
      v21 = 0;
    }
    else if ( (v33 & 0x1000000) != 0 )
    {
      v21 = 128;
    }
    else
    {
      v21 = 0;
    }
    v22 = sub_1288D4(a1, v21 | v33, v31);
    if ( v22 < 0 )
      return -1;
    --v12;
    v5 += v22;
    if ( v12 == -1 )
      return v5;
  }
  if ( !a1 )
  {
    v16 = v5 + v36;
LABEL_29:
    v5 = v16 + v10;
    goto LABEL_30;
  }
  if ( v36 != sub_B69CC(a1, (int)v38, v36) )
    return -1;
  v15 = 0;
  v16 = v5 + v36;
  if ( !v10 )
    goto LABEL_29;
  while ( sub_B69CC(a1, (int)&word_1E1C4C, 1) == 1 )
  {
    if ( v10 == ++v15 )
      goto LABEL_29;
  }
  return -1;
}
