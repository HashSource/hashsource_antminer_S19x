int __fastcall sub_6B004(_DWORD *a1, unsigned int a2, int a3, int (__fastcall *a4)(__int16 *, int, int), int a5)
{
  char *v10; // r11
  int v11; // r8
  int v12; // r7
  int v13; // r7
  int v14; // r0
  __int64 v15; // r0
  int v16; // r0
  int v17; // r1
  int v18; // r0
  _DWORD *v19; // r9
  int v20; // r6
  unsigned int i; // r11
  unsigned int v22; // r3
  char *v23; // r11
  unsigned int v24; // r9
  _DWORD *v25; // r7
  int (*v26)(const void *, const void *); // r3
  int v27; // r8
  int v28; // r11
  int v29; // r10
  int v30; // r9
  int v31; // r0
  int v32; // r0
  int v33; // r9
  int v34; // r8
  int v35; // r0
  size_t nmemb; // [sp+Ch] [bp-88h]
  int v37; // [sp+10h] [bp-84h]
  __int16 *v38; // [sp+10h] [bp-84h]
  char *v39; // [sp+14h] [bp-80h]
  int v40; // [sp+14h] [bp-80h]
  int v41; // [sp+18h] [bp-7Ch]
  int v42; // [sp+18h] [bp-7Ch]
  unsigned int v43; // [sp+1Ch] [bp-78h]
  unsigned int v44; // [sp+20h] [bp-74h]
  _DWORD *base; // [sp+24h] [bp-70h]
  __int16 s[52]; // [sp+2Ch] [bp-68h] BYREF

  if ( !a1 )
    return -1;
  switch ( *a1 )
  {
    case 0:
      v10 = ":";
      if ( (a2 & 0x20) != 0 )
        v11 = 1;
      else
        v11 = 2;
      if ( (a2 & 0x20) == 0 )
        v10 = ": ";
      if ( a1[8] )
        goto LABEL_40;
      a1[8] = 1;
      v12 = sub_6E048(a1);
      if ( a4((__int16 *)"{", 1, a5) )
        goto LABEL_40;
      if ( !v12 )
        goto LABEL_12;
      v42 = a3 + 1;
      if ( sub_6ACFC(a2, a3 + 1, 0, a4, a5) )
        goto LABEL_40;
      if ( (a2 & 0x180) != 0 )
      {
        v37 = sub_6DFB0(a1);
        v18 = sub_6D500(8 * v37);
        base = (_DWORD *)v18;
        if ( v18 )
        {
          v39 = v10;
          v44 = a2;
          v19 = (_DWORD *)(v18 + 4);
          v20 = v12;
          for ( i = 0; ; ++i )
          {
            *(v19 - 1) = sub_6BE28(v20);
            *v19 = sub_6E0C8(v20);
            v19 += 2;
            v20 = sub_6E094(a1, v20);
            if ( !v20 )
              break;
          }
          v22 = i + 1;
          nmemb = i + 1;
          v43 = i;
          v23 = v39;
          if ( v37 != v22 )
            _assert_fail("i == size", "3rdparty/jansson-2.6/src/dump.c", 0x141u, "do_dump");
          v24 = 0;
          v25 = base;
          v26 = (int (*)(const void *, const void *))sub_6AC9C;
          if ( (v44 & 0x80) != 0 )
            v26 = (int (*)(const void *, const void *))sub_6ACF0;
          qsort(base, nmemb, 8u, v26);
          v40 = v11;
          v38 = (__int16 *)v23;
          v27 = a3 + 1;
          v41 = a3;
          while ( 1 )
          {
            v28 = v25[1];
            v29 = sub_6DFCC(a1, v28);
            if ( !v29 )
              _assert_fail("value", "3rdparty/jansson-2.6/src/dump.c", 0x151u, "do_dump");
            sub_6ADA0(v28, (int (__fastcall *)(char *, int))a4, a5, v44);
            if ( a4(v38, v40, a5) || sub_6B004(v29, v44, v27, a4, a5) )
              break;
            if ( v24 < v43 )
            {
              if ( a4((__int16 *)",", 1, a5) || sub_6ACFC(v44, v27, 1, a4, a5) )
                break;
            }
            else if ( sub_6ACFC(v44, v41, 0, a4, a5) )
            {
              break;
            }
            ++v24;
            v25 += 2;
            if ( v24 == nmemb )
            {
              sub_6D518(base);
              goto LABEL_12;
            }
          }
          sub_6D518(base);
        }
      }
      else
      {
        while ( 1 )
        {
          v30 = sub_6E094(a1, v12);
          v31 = sub_6E0C8(v12);
          sub_6ADA0(v31, (int (__fastcall *)(char *, int))a4, a5, a2);
          if ( a4((__int16 *)v10, v11, a5) )
            goto LABEL_40;
          v32 = sub_6E0D4(v12);
          if ( sub_6B004(v32, a2, v42, a4, a5) )
            goto LABEL_40;
          if ( !v30 )
            break;
          if ( !a4((__int16 *)",", 1, a5) )
          {
            v12 = v30;
            if ( !sub_6ACFC(a2, v42, 1, a4, a5) )
              continue;
          }
          goto LABEL_40;
        }
        if ( !sub_6ACFC(a2, a3, 0, a4, a5) )
        {
LABEL_12:
          a1[8] = 0;
          return a4(&word_836FC, 1, a5);
        }
      }
LABEL_40:
      a1[8] = 0;
      return -1;
    case 1:
      if ( a1[5] )
        goto LABEL_51;
      a1[5] = 1;
      v13 = sub_6E1A8(a1);
      if ( a4((__int16 *)"[", 1, a5) )
        goto LABEL_51;
      if ( !v13 )
        goto LABEL_16;
      v33 = a3 + 1;
      v34 = sub_6ACFC(a2, a3 + 1, 0, a4, a5);
      if ( v34 )
        goto LABEL_51;
      if ( v13 <= 0 )
        goto LABEL_16;
      break;
    case 2:
      v14 = sub_6E350(a1);
      return sub_6ADA0(v14, (int (__fastcall *)(char *, int))a4, a5, a2);
    case 3:
      v15 = sub_6E430(a1);
      v16 = snprintf((char *)s, 0x64u, "%lld", v15);
      return a4(s, v16, a5);
    case 4:
      sub_6E4E0(a1);
      v17 = sub_6D818(s, 100);
      if ( v17 < 0 )
        return -1;
      return a4(s, v17, a5);
    case 5:
      return a4((__int16 *)"true", 4, a5);
    case 6:
      return a4((__int16 *)"false", 5, a5);
    case 7:
      return a4((__int16 *)"null", 4, a5);
    default:
      return -1;
  }
  while ( 1 )
  {
    v35 = sub_6E1C4(a1, v34);
    if ( sub_6B004(v35, a2, v33, a4, a5) )
      break;
    if ( v13 - 1 <= v34 )
    {
      if ( sub_6ACFC(a2, a3, 0, a4, a5) )
        break;
    }
    else if ( a4((__int16 *)",", 1, a5) || sub_6ACFC(a2, v33, 1, a4, a5) )
    {
      break;
    }
    if ( v13 == ++v34 )
    {
LABEL_16:
      a1[5] = 0;
      return a4(&word_7A848, 1, a5);
    }
  }
LABEL_51:
  a1[5] = 0;
  return -1;
}
