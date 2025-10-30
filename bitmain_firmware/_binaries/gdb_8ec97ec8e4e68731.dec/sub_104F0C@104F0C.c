int __fastcall sub_104F0C(_DWORD *a1)
{
  __int64 v1; // r6
  const void *v2; // r1
  int v3; // r5
  int result; // r0
  unsigned int v6; // r1
  int v7; // r3
  int v8; // r5
  int v9; // r2
  int v10; // r3

  if ( !dword_47B240 )
  {
    if ( dword_47B24C )
    {
      v6 = dword_47B244;
      if ( !dword_47B244 )
      {
        v7 = *(_DWORD *)(dword_47B24C + 4);
        v8 = *(_DWORD *)(v7 + 80);
        if ( sub_2A8A04(a1, 0, v8, *(_DWORD *)(v7 + 84), 0) )
          goto LABEL_14;
        v9 = *(_DWORD *)(dword_47B24C + 4);
        v10 = *(_DWORD *)dword_47B24C;
        dword_47B250 = v8 - dword_47B248;
        v6 = *(_DWORD *)(v9 + 36);
        dword_47B24C = v10;
        dword_47B244 = v6;
      }
      if ( v6 >= 0xC000 )
        v6 = 49152;
      v3 = sub_2A87D8(&unk_47B2A4, v6, a1);
    }
    else
    {
      v3 = sub_2A87D8(&unk_47B2A4, 49152, a1);
    }
    if ( v3 >= 0 )
      goto LABEL_4;
LABEL_14:
    sub_258B04(*a1);
  }
  v1 = *(_QWORD *)&dword_47B244;
  v2 = (const void *)(dword_47B240 + dword_47B248);
  if ( (unsigned int)dword_47B244 >= 0xC000 )
  {
    v3 = 49152;
    memcpy(&unk_47B2A4, v2, 0xC000u);
    goto LABEL_7;
  }
  v3 = dword_47B244;
  memcpy(&unk_47B2A4, v2, dword_47B244);
LABEL_4:
  if ( !v3 )
    sub_946E0("Premature end of file reading symbol table");
  v1 = *(_QWORD *)&dword_47B244;
LABEL_7:
  result = sub_347418(v3, dword_47B258);
  dword_47B254 = result;
  dword_47B244 = v1 - v3;
  dword_47B248 = HIDWORD(v1) + v3;
  dword_47B25C = 0;
  return result;
}
