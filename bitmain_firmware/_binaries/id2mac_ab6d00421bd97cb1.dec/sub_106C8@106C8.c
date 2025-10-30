int __fastcall sub_106C8(_BYTE *a1)
{
  FILE *v2; // r6
  size_t v3; // r10
  __int64 v4; // r0
  __int64 v5; // r2
  unsigned int v6; // r8
  unsigned int v7; // lr
  unsigned int v8; // kr00_4
  const char *v9; // r7
  int v10; // r1
  int v12; // t1
  int v13; // r3
  int v14; // r3
  int v15; // t1
  _QWORD v17[2]; // [sp+0h] [bp-10h]

  if ( dword_21448 )
  {
    v4 = qword_21450;
    v5 = qword_21458;
LABEL_9:
    v6 = (v4 >> 9) ^ HIDWORD(v4);
    v7 = (v5 >> 9) ^ HIDWORD(v5);
    HIDWORD(qword_21450) = HIDWORD(v5) ^ (HIDWORD(v5) >> 5) ^ v6 ^ (v6 >> 18);
    LODWORD(qword_21450) = (v5 >> 5)
                         ^ v5
                         ^ v4
                         ^ ((_DWORD)v4 << 23)
                         ^ ((((unsigned int)v4 ^ ((_DWORD)v4 << 23)) >> 18) | (v6 << 14));
    v8 = qword_21450 + v5;
    HIDWORD(v5) = (unsigned __int64)(qword_21450 + v5) >> 32;
    LODWORD(qword_21458) = v5
                         ^ ((_DWORD)v5 << 23)
                         ^ ((((unsigned int)v5 ^ ((_DWORD)v5 << 23)) >> 18) | (v7 << 14))
                         ^ qword_21450
                         ^ (qword_21450 >> 5);
    v9 = "xxxxxxxxxxxx4xxxyxxxxxxxxxxxxxxx";
    v10 = 0;
    HIDWORD(qword_21458) = v7 ^ (v7 >> 18) ^ HIDWORD(qword_21450) ^ (HIDWORD(qword_21450) >> 5);
    LODWORD(v5) = 120;
    v17[1] = qword_21458 + qword_21450;
    v17[0] = __PAIR64__(HIDWORD(v5), v8);
    while ( 1 )
    {
      v13 = *((unsigned __int8 *)v17 + (v10 >> 1));
      HIDWORD(v5) = (v10 & 1) != 0 ? v13 >> 4 : v13 & 0xF;
      if ( (_DWORD)v5 == 120 )
        break;
      v14 = BYTE4(v5) & 3;
      if ( (_DWORD)v5 == 121 )
      {
        ++v10;
        *a1 = a0123456789abcd[v14 + 8];
LABEL_11:
        v12 = *(unsigned __int8 *)++v9;
        LODWORD(v5) = v12;
        ++a1;
        if ( !v12 )
          goto LABEL_18;
      }
      else
      {
        *a1++ = v5;
        v15 = *(unsigned __int8 *)++v9;
        LODWORD(v5) = v15;
        if ( !v15 )
        {
LABEL_18:
          *a1 = v5;
          return v5;
        }
      }
    }
    ++v10;
    *a1 = a0123456789abcd[HIDWORD(v5)];
    goto LABEL_11;
  }
  while ( 1 )
  {
    v2 = (FILE *)fopen64("/dev/urandom", "rb");
    if ( !v2 )
      return -1;
    v3 = fread(&qword_21450, 1u, 0x10u, v2);
    fclose(v2);
    if ( v3 != 16 )
      return -1;
    v4 = qword_21450;
    v5 = qword_21458;
    if ( qword_21450 || qword_21458 )
    {
      dword_21448 = 1;
      goto LABEL_9;
    }
  }
}
