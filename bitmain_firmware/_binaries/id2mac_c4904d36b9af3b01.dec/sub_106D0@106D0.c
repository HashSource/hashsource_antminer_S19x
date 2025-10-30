int __fastcall sub_106D0(_BYTE *a1)
{
  __int64 v2; // r0
  __int64 v3; // r2
  __int64 v4; // r8
  const char *v5; // lr
  __int64 v6; // r6
  unsigned int v7; // r1
  __int64 v8; // r0
  __int64 v9; // r2
  __int64 v10; // r6
  int result; // r0
  int v12; // r1
  int v13; // t1
  int v14; // r3
  int v15; // r3
  int v16; // r3
  int v17; // t1
  FILE *v18; // r7
  size_t v19; // r9
  _QWORD v20[2]; // [sp+8h] [bp-14h]

  if ( dword_21540 )
  {
    v2 = *(_QWORD *)&dword_21548;
    v3 = *(_QWORD *)&dword_21550;
    goto LABEL_3;
  }
  while ( 1 )
  {
    v18 = (FILE *)fopen64("/dev/urandom", "rb");
    if ( !v18 )
      return -1;
    v19 = fread(&dword_21548, 1u, 0x10u, v18);
    fclose(v18);
    if ( v19 != 16 )
      return -1;
    v2 = *(_QWORD *)&dword_21548;
    if ( *(_QWORD *)&dword_21548 )
    {
      v3 = *(_QWORD *)&dword_21550;
LABEL_20:
      dword_21540 = 1;
LABEL_3:
      v4 = (v2 << 23) ^ v2;
      v5 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
      LODWORD(v6) = ((_DWORD)v2 << 23) ^ v2 ^ (v3 >> 5) ^ v3 ^ (v4 >> 18);
      v7 = (v3 >> 9) ^ HIDWORD(v3);
      HIDWORD(v6) = HIDWORD(v4) ^ (HIDWORD(v3) >> 5) ^ HIDWORD(v3) ^ (HIDWORD(v4) >> 18);
      LODWORD(v8) = ((_DWORD)v3 << 23)
                  ^ v3
                  ^ (((((_DWORD)v3 << 23) ^ (unsigned int)v3) >> 18) | (v7 << 14))
                  ^ v6
                  ^ (v6 >> 5);
      *(_QWORD *)&dword_21548 = v6;
      HIDWORD(v8) = v7 ^ (v7 >> 18) ^ HIDWORD(v6) ^ (HIDWORD(v6) >> 5);
      v9 = v3 + v6;
      *(_QWORD *)&dword_21550 = v8;
      v10 = v6 + v8;
      result = 120;
      v12 = 0;
      v20[0] = v9;
      v20[1] = v10;
      while ( 2 )
      {
        while ( 1 )
        {
          v14 = *((unsigned __int8 *)v20 + (v12 >> 1));
          v15 = (v12 & 1) != 0 ? v14 >> 4 : v14 & 0xF;
          if ( result == 120 )
            break;
          v16 = v15 & 3;
          if ( result == 121 )
          {
            ++v12;
            *a1 = a0123456789abcd[v16 + 8];
            goto LABEL_5;
          }
          *a1++ = result;
          v17 = *(unsigned __int8 *)++v5;
          result = v17;
          if ( !v17 )
          {
LABEL_12:
            *a1 = result;
            return result;
          }
        }
        ++v12;
        *a1 = a0123456789abcd[v15];
LABEL_5:
        v13 = *(unsigned __int8 *)++v5;
        result = v13;
        ++a1;
        if ( !v13 )
          goto LABEL_12;
        continue;
      }
    }
    v3 = *(_QWORD *)&dword_21550;
    if ( *(_QWORD *)&dword_21550 )
      goto LABEL_20;
  }
}
