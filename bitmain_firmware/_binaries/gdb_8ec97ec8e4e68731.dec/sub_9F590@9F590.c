int __fastcall sub_9F590(int *a1, int a2, int a3, int a4, int a5)
{
  int v5; // r6
  char *v9; // r0
  unsigned __int8 *v10; // r0
  int v11; // r5
  const char *v12; // r0
  char *v13; // r10
  int v15; // r1
  int v16; // r3
  int v17; // r10
  int v18; // r1
  int v19; // lr
  int v20; // r2
  int v21; // r3
  int v22; // r12
  int *v24; // r12
  int v25; // r3
  int *i; // r2
  int *v27; // r4
  char *endptr; // [sp+4h] [bp-4h] BYREF

  if ( a4 )
    v5 = 2;
  if ( !a4 )
    v5 = 1;
  v9 = getenv("PS2");
  if ( !v9 )
    v9 = "> ";
  v10 = (unsigned __int8 *)sub_243ED8(v9, 0, a5);
  if ( !v10 )
    goto LABEL_45;
  v11 = 0;
  while ( 1 )
  {
    v12 = sub_935D0(v10);
    v13 = (char *)v12;
    if ( !*v12 )
    {
      if ( v11 )
        goto LABEL_12;
LABEL_45:
      sub_51E9C("one or more choice numbers");
    }
    v15 = strtol(v12, &endptr, 10);
    v10 = (unsigned __int8 *)endptr;
    v16 = (unsigned int)v15 >> 31;
    if ( endptr == v13 )
      v16 = 1;
    if ( v16 || v5 + a2 <= v15 )
      sub_946E0("Argument must be choice number");
    if ( !v15 )
      sub_946E0("cancelled");
    if ( v5 > v15 )
      break;
    v17 = v11 - 1;
    v18 = v15 - v5;
    if ( v11 )
    {
      v19 = a1[v17];
      v20 = v17;
      if ( v18 >= v19 )
      {
        if ( v18 != v19 )
        {
          a1[v20 + 1] = v18;
          ++v11;
        }
      }
      else
      {
        v21 = v11 - 1;
        do
        {
          if ( v21-- == 0 )
          {
            v24 = a1;
            goto LABEL_26;
          }
          v22 = a1[v21];
        }
        while ( v22 > v18 );
        if ( v22 != v18 )
        {
          v24 = &a1[v21 + 1];
          if ( v17 <= v21 )
          {
LABEL_29:
            *v24 = v18;
            ++v11;
            continue;
          }
LABEL_26:
          v25 = (int)&a1[v21 + 1];
          for ( i = &a1[v20 + 1]; ; v19 = *(i - 1) )
          {
            *i-- = v19;
            if ( (int *)v25 == i )
              break;
          }
          goto LABEL_29;
        }
      }
    }
    else
    {
      v11 = 1;
      *a1 = v18;
    }
  }
  if ( a2 > 0 )
  {
    v27 = a1 - 1;
    do
    {
      v27[1] = v16;
      ++v27;
      ++v16;
    }
    while ( a2 != v16 );
  }
  v11 = a2;
LABEL_12:
  if ( v11 > a3 )
    sub_946E0("Select no more than %d of the above", a3);
  return v11;
}
