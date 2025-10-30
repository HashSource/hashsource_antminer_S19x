int __fastcall sub_4B63C(int a1, int a2, char *s)
{
  char *v4; // r9
  size_t v5; // r5
  unsigned int v6; // r6
  char *v7; // r4
  size_t v8; // r8
  size_t v9; // r4
  char *v10; // r7
  size_t v11; // r5
  const unsigned __int16 **v12; // r10
  bool v13; // cc
  unsigned int v14; // r3
  unsigned int v15; // t1
  size_t v16; // r12
  char *v17; // r0
  bool v18; // cc
  unsigned int v20; // r1
  char *v21; // r0
  unsigned int v23; // [sp+14h] [bp-F8h]
  _DWORD v24[33]; // [sp+1Ch] [bp-F0h] BYREF
  char v25[4]; // [sp+A0h] [bp-6Ch] BYREF
  _BYTE v26[96]; // [sp+A4h] [bp-68h] BYREF

  switch ( a2 )
  {
    case 1:
      v4 = v26;
      v5 = 5;
      v6 = 96;
      v7 = "JJY ";
      v23 = 95;
      break;
    case 2:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "--> ";
      break;
    case 3:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "<-- ";
      break;
    case 4:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "--- ";
      break;
    case 5:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "=== ";
      break;
    case 6:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "-W- ";
      break;
    case 7:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "-X- ";
      break;
    case 8:
      v5 = 5;
      v23 = 95;
      v6 = 96;
      v4 = v26;
      v7 = "!!! ";
      break;
    default:
      v23 = 99;
      v5 = 1;
      v6 = 100;
      v4 = v25;
      v7 = byte_99528;
      break;
  }
  v8 = strlen(s);
  memcpy(v25, v7, v5);
  memcpy(v24, off_B7ED0, sizeof(v24));
  if ( v8 )
  {
    v9 = 0;
    v10 = s - 1;
    v11 = 0;
    v12 = _ctype_b_loc();
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = (unsigned __int8)*++v10;
        v14 = v15;
        if ( ((*v12)[v15] & 0x4000) == 0 )
          break;
        if ( v9 + 1 >= v6 )
          goto LABEL_17;
        v4[v9++] = v14;
LABEL_7:
        ++v11;
        v13 = v6 > v9;
        if ( v6 > v9 )
          v13 = v8 > v11;
        if ( !v13 )
        {
LABEL_17:
          if ( v9 >= v23 )
            v8 = v23;
          else
            v8 = v9;
          goto LABEL_20;
        }
      }
      if ( v14 > 0x20 )
      {
        if ( v9 + 6 >= v6 )
          goto LABEL_17;
        v20 = v6 - v9;
        v21 = &v4[v9];
        v9 += 5;
        sub_6D00C(v21, v20, "<x%X>");
        goto LABEL_7;
      }
      v16 = strlen((const char *)v24[v14]);
      if ( v9 + 1 + v16 < v6 )
      {
        v17 = &v4[v9];
        v9 += v16;
        ++v11;
        sub_6E4B4(v17);
        v18 = v6 > v9;
        if ( v6 > v9 )
          v18 = v8 > v11;
        if ( v18 )
          continue;
      }
      goto LABEL_17;
    }
  }
LABEL_20:
  v4[v8] = 0;
  return sub_42D0C(a1 + 16, v25);
}
