int __fastcall sub_1E0E90(int a1, char *a2)
{
  int v2; // r2
  int v3; // lr
  char *v4; // r12
  char v5; // r3
  int v6; // r0
  char v7; // r3
  int v8; // r3
  bool v9; // cc
  bool v11; // cc

  v2 = a1 + 2;
  v3 = a1 + 16;
  v4 = a2 + 8;
  do
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)(v2 - 2);
      if ( (unsigned int)(v8 - 97) <= 5 )
      {
        v5 = 16 * (v8 - 87);
        goto LABEL_3;
      }
      if ( (unsigned int)(v8 - 48) <= 9 )
        break;
      v11 = (unsigned int)(v8 - 65) > 5;
      if ( (unsigned int)(v8 - 65) > 5 )
        v5 = -16;
      else
        v5 = v8 - 55;
      if ( !v11 )
        v5 *= 16;
LABEL_3:
      v6 = *(unsigned __int8 *)(v2 - 1);
      if ( (unsigned int)(v6 - 97) > 5 )
        goto LABEL_9;
LABEL_4:
      v7 = v5 | (v6 - 87);
LABEL_5:
      *a2++ = v7;
      v2 += 2;
      if ( a2 == v4 )
        return v3;
    }
    v5 = 16 * (v8 - 48);
    v6 = *(unsigned __int8 *)(v2 - 1);
    if ( (unsigned int)(v6 - 97) <= 5 )
      goto LABEL_4;
LABEL_9:
    if ( (unsigned int)(v6 - 48) <= 9 )
    {
      v7 = v5 | (v6 - 48);
      goto LABEL_5;
    }
    v9 = (unsigned int)(v6 - 65) > 5;
    v2 += 2;
    if ( (unsigned int)(v6 - 65) > 5 )
      v5 = -1;
    else
      LOBYTE(v6) = v6 - 55;
    if ( !v9 )
      v5 |= v6;
    *a2++ = v5;
  }
  while ( a2 != v4 );
  return v3;
}
