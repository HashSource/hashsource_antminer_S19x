int __fastcall sub_12A360(FILE *s, int *a2, int a3, int a4)
{
  int v4; // r4
  int v6; // r0
  int v7; // r5
  int v8; // r4
  unsigned int v11; // r3
  int v12; // r10
  int *v13; // r0
  int v14; // r6
  unsigned int v15; // r10
  int v16; // r9
  int v17; // r7
  int v18; // r4
  int v19; // r6
  int v20; // r7
  char *v21; // r0
  char *v22; // r9
  bool v23; // zf
  size_t v24; // r2
  int v25; // r1
  signed int v26; // r0
  int v27; // r11
  signed int v28; // r7
  int v29; // r7
  int v30; // r11
  unsigned int v31; // [sp+0h] [bp-ACh]
  int v32; // [sp+4h] [bp-A8h]
  int v33; // [sp+8h] [bp-A4h]
  int *v34; // [sp+Ch] [bp-A0h]
  int v35; // [sp+10h] [bp-9Ch]
  signed int v37; // [sp+18h] [bp-94h]
  int v38; // [sp+20h] [bp-8Ch]
  char *v39; // [sp+24h] [bp-88h]
  size_t v40; // [sp+28h] [bp-84h]
  char *v41; // [sp+2Ch] [bp-80h]
  char *ptr; // [sp+34h] [bp-78h]
  size_t n; // [sp+38h] [bp-74h]
  int v44; // [sp+3Ch] [bp-70h]
  int v45; // [sp+44h] [bp-68h]
  int v46; // [sp+4Ch] [bp-60h]
  size_t v47; // [sp+50h] [bp-5Ch]
  char *v48; // [sp+54h] [bp-58h]
  char v49[84]; // [sp+58h] [bp-54h] BYREF

  v4 = a3;
  v35 = a4;
  if ( !a4 )
  {
    v6 = sub_B78F4((int)s, 0);
    v7 = v6;
    if ( !v6 )
      return -1;
    v8 = sub_115EA0(v6, a2);
    BIO_vfree_0(v7);
    return v8;
  }
  if ( a3 >= 0 )
  {
    if ( a3 && s )
    {
      v19 = 0;
      do
      {
        if ( fwrite(&word_1E1C4C, 1u, 1u, s) != 1 )
          return -1;
        ++v19;
      }
      while ( v4 != v19 );
      a4 = v35;
    }
  }
  else
  {
    v4 = 0;
  }
  v11 = a4 & 0xF0000;
  if ( v11 == 0x20000 )
  {
    v12 = 0;
    v48 = " + ";
    ptr = ", ";
    n = 2;
    v47 = 3;
    v44 = 2;
    v45 = 3;
  }
  else if ( v11 <= 0x20000 )
  {
    if ( v11 != 0x10000 )
      return -1;
    n = 1;
    v12 = 0;
    v47 = 1;
    v45 = 1;
    v44 = 1;
    v48 = "+";
    ptr = ",";
  }
  else if ( v11 == 196608 )
  {
    n = 2;
    v12 = 0;
    v44 = 2;
    v47 = 3;
    v45 = 3;
    v48 = " + ";
    ptr = "; ";
  }
  else
  {
    if ( v11 != 0x40000 )
      return -1;
    v12 = v4;
    n = 1;
    v44 = 1;
    v47 = 3;
    v45 = 3;
    v48 = " + ";
    ptr = "\n";
  }
  if ( (v35 & 0x800000) != 0 )
  {
    v40 = 3;
    v38 = 3;
    v41 = " = ";
  }
  else
  {
    v41 = "=";
    v40 = 1;
    v38 = 1;
  }
  v33 = v35 & 0x600000;
  v13 = sub_113C38(a2);
  if ( (int)v13 <= 0 )
    return v4;
  v46 = v35 & 0x2000000;
  v14 = v12;
  v15 = (unsigned int)v13 - 1;
  v31 = 0;
  v32 = -1;
  while ( 1 )
  {
    if ( (v35 & 0x100000) != 0 )
      v16 = sub_113CB0(a2, v15);
    else
      v16 = sub_113CB0(a2, v31);
    if ( v32 == -1 )
      goto LABEL_36;
    if ( sub_1141A8(v16) != v32 )
      break;
    if ( s && v47 != fwrite(v48, 1u, v47, s) )
      return -1;
    v4 += v45;
LABEL_36:
    v32 = sub_1141A8(v16);
    v20 = sub_114120(v16);
    v34 = (int *)sub_114128(v16);
    v21 = sub_EAC84(v20);
    v22 = v21;
    if ( v33 == 6291456 )
      goto LABEL_50;
    v23 = v21 == 0;
    if ( v21 )
      v23 = v33 == 0x400000;
    v24 = v23;
    if ( v23 )
    {
      v39 = v49;
      sub_EACFC(v49, 80, v20, 1);
      v27 = 0;
      v28 = strlen(v49);
      v37 = v28;
LABEL_62:
      if ( s )
        goto LABEL_63;
LABEL_75:
      if ( v27 > v28 && v46 )
        goto LABEL_66;
      goto LABEL_49;
    }
    if ( !v33 )
    {
      v27 = 10;
      v39 = sub_EAAB4((unsigned int)v21);
      v28 = strlen(v39);
      v37 = v28;
      if ( s )
      {
LABEL_63:
        if ( fwrite(v39, 1u, v28, s) != v28 )
          return -1;
        if ( v27 > v28 && v46 )
        {
LABEL_66:
          v29 = v27 - v28;
          if ( v29 > 0 && s )
          {
            v30 = 0;
            while ( fwrite(&word_1E1C4C, 1u, 1u, s) == 1 )
            {
              if ( ++v30 == v29 )
                goto LABEL_72;
            }
            return -1;
          }
LABEL_72:
          v4 += v29;
          if ( !s )
            goto LABEL_49;
        }
LABEL_48:
        if ( v40 != fwrite(v41, 1u, v40, s) )
          return -1;
        goto LABEL_49;
      }
      goto LABEL_75;
    }
    if ( v33 == 0x200000 )
    {
      v27 = 25;
      v39 = sub_EAB40((unsigned int)v21);
      v28 = strlen(v39);
      v37 = v28;
      goto LABEL_62;
    }
    if ( s )
    {
      if ( fwrite(&byte_1A4198, 1u, v24, s) )
        return -1;
      v37 = 0;
      goto LABEL_48;
    }
    v37 = 0;
LABEL_49:
    v4 += v37 + v38;
LABEL_50:
    if ( v22 )
    {
      v25 = 0;
    }
    else if ( (v35 & 0x1000000) != 0 )
    {
      v25 = 128;
    }
    else
    {
      v25 = 0;
    }
    v26 = sub_1294E8(s, v25 | v35, v34);
    if ( v26 < 0 )
      return -1;
    --v15;
    v4 += v26;
    ++v31;
    if ( v15 == -1 )
      return v4;
  }
  if ( !s )
  {
    v18 = v4 + v44;
LABEL_59:
    v4 = v18 + v14;
    goto LABEL_36;
  }
  if ( fwrite(ptr, 1u, n, s) != n )
    return -1;
  v17 = 0;
  v18 = v4 + v44;
  if ( !v14 )
    goto LABEL_59;
  while ( fwrite(&word_1E1C4C, 1u, 1u, s) == 1 )
  {
    if ( v14 == ++v17 )
      goto LABEL_59;
  }
  return -1;
}
