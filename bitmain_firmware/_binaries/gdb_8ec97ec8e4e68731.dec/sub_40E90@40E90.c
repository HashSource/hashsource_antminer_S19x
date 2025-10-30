size_t __fastcall sub_40E90(const char *a1, sigset_t *a2)
{
  size_t result; // r0
  int v5; // r6
  bool v6; // nf
  int v7; // r6
  const char *v8; // r5
  const char *v9; // r8
  int v10; // r3
  int v11; // t1
  char v12; // r4

  result = strlen(a1);
  v5 = result - 1;
  if ( a1[result - 1] != 10 )
LABEL_19:
    sub_946E0("Could not parse signal set: %s", a1);
  v6 = v5 < 0;
  v7 = 4 * v5;
  if ( !v6 && result != 1 )
  {
    v8 = a1 - 1;
    v9 = &a1[result - 2];
    while ( 1 )
    {
      v11 = *(unsigned __int8 *)++v8;
      v10 = v11;
      v12 = v11 - 48;
      if ( (unsigned __int8)(v11 - 48) > 9u )
      {
        if ( (unsigned int)(v10 - 97) > 5 )
          goto LABEL_19;
        v12 = v10 - 87;
      }
      if ( (v12 & 1) != 0 )
      {
        result = sigaddset(a2, v7 - 3);
        if ( (v12 & 2) == 0 )
        {
LABEL_6:
          if ( (v12 & 4) == 0 )
            goto LABEL_7;
          goto LABEL_16;
        }
      }
      else if ( (v12 & 2) == 0 )
      {
        goto LABEL_6;
      }
      result = sigaddset(a2, v7 - 2);
      if ( (v12 & 4) == 0 )
      {
LABEL_7:
        if ( (v12 & 8) == 0 )
          goto LABEL_8;
        goto LABEL_17;
      }
LABEL_16:
      result = sigaddset(a2, v7 - 1);
      if ( (v12 & 8) == 0 )
      {
LABEL_8:
        if ( v8 == v9 )
          return result;
        goto LABEL_9;
      }
LABEL_17:
      result = sigaddset(a2, v7);
      if ( v8 == v9 )
        return result;
LABEL_9:
      v7 -= 4;
    }
  }
  return result;
}
