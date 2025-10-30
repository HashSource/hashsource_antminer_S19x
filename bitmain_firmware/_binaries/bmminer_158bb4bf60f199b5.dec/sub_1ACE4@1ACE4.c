int sub_1ACE4()
{
  int i; // r7
  int v1; // r3
  int v2; // r4
  int v3; // r6
  int result; // r0
  int v5; // r3

  for ( i = 6; i != 78; i += 6 )
  {
    v1 = dword_A0D68;
    v2 = 0;
    v3 = (unsigned __int8)(i * *(_BYTE *)(dword_A0D68 + 12954));
    while ( 1 )
    {
      result = (unsigned __int8)v2;
      v5 = *(_DWORD *)(v1 + 4 * v2++ + 4);
      if ( v5 == 1 )
        break;
      if ( v2 == 16 )
        goto LABEL_7;
LABEL_4:
      v1 = dword_A0D68;
    }
    result = sub_759F4(result, v3, 13);
    if ( v2 != 16 )
      goto LABEL_4;
LABEL_7:
    ;
  }
  return result;
}
