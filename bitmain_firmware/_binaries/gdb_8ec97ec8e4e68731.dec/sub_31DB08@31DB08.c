char *__fastcall sub_31DB08(const char *a1)
{
  const char *v1; // r4
  char *v2; // r9
  int v3; // r10
  int v4; // r11
  int v5; // r5
  int v6; // r8
  int v7; // r7
  size_t v8; // r0
  int v9; // t1
  char *v10; // r1
  char *v11; // r0
  int v12; // r2
  _BYTE *v13; // r12
  int v14; // t1
  int v15; // t1
  int v16; // r0
  int v17; // r2
  int v18; // t1
  _BYTE *ptr; // [sp+0h] [bp-Ch]
  int *v21; // [sp+4h] [bp-8h]

  v1 = a1;
  if ( !a1 )
    return 0;
  v2 = 0;
  v3 = 0;
  v4 = 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = strlen(a1);
  ptr = sub_93028(v8 + 1);
  do
  {
    if ( (word_438898[*(unsigned __int8 *)v1] & 0x40) != 0 )
    {
      do
        v9 = *(unsigned __int8 *)++v1;
      while ( (word_438898[v9] & 0x40) != 0 );
    }
    if ( v3 && v3 - 1 > v4 )
    {
      v10 = &v2[4 * v4];
    }
    else
    {
      if ( v2 )
      {
        v3 *= 2;
        v11 = (char *)sub_93050(v2, 4 * v3);
      }
      else
      {
        v3 = 8;
        v11 = (char *)sub_93028(0x20u);
      }
      v2 = v11;
      v10 = &v11[4 * v4];
      *(_DWORD *)v10 = 0;
    }
    v12 = *(unsigned __int8 *)v1;
    v13 = ptr;
    if ( *v1 )
    {
      do
      {
        while ( 1 )
        {
          if ( (word_438898[v12] & 0x40) != 0 && !(v6 | v7 | v5) )
          {
            v5 = 0;
            goto LABEL_24;
          }
          if ( !v5 )
            break;
LABEL_13:
          *v13 = v12;
          v5 = 0;
          ++v13;
LABEL_14:
          v14 = *(unsigned __int8 *)++v1;
          v12 = v14;
          if ( !v14 )
            goto LABEL_24;
        }
        if ( v12 == 92 )
        {
          v5 = 1;
          goto LABEL_14;
        }
        if ( !v7 )
        {
          if ( !v6 )
          {
            if ( v12 == 39 )
            {
              v5 = 0;
              v7 = 1;
            }
            else if ( v12 == 34 )
            {
              v5 = 0;
              v7 = 0;
              v6 = 1;
            }
            else
            {
              *v13 = v12;
              v5 = 0;
              ++v13;
              v7 = 0;
            }
            goto LABEL_14;
          }
          if ( v12 == 34 )
          {
            v5 = 0;
            v6 = 0;
            goto LABEL_14;
          }
          goto LABEL_13;
        }
        if ( v12 == 39 )
        {
          v7 = 0;
          goto LABEL_14;
        }
        *v13++ = v12;
        v15 = *(unsigned __int8 *)++v1;
        v12 = v15;
      }
      while ( v15 );
    }
LABEL_24:
    *v13 = 0;
    ++v4;
    v21 = (int *)v10;
    v16 = sub_327254(ptr);
    v21[1] = 0;
    *v21 = v16;
    v17 = *(unsigned __int8 *)v1;
    if ( (word_438898[v17] & 0x40) != 0 )
    {
      do
      {
        v18 = *(unsigned __int8 *)++v1;
        v17 = v18;
      }
      while ( (word_438898[v18] & 0x40) != 0 );
    }
  }
  while ( v17 );
  free(ptr);
  return v2;
}
