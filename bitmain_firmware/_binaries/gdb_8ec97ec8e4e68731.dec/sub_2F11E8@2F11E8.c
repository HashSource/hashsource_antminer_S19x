int __fastcall sub_2F11E8(unsigned __int8 **a1, unsigned int a2, unsigned int a3)
{
  unsigned __int8 *v3; // r12
  unsigned __int8 *v4; // r3
  int v7; // r0
  bool v8; // zf
  unsigned int v11; // [sp+4h] [bp-14h] BYREF

  v3 = *a1;
  if ( a2 <= (unsigned int)*a1 )
    return 0;
  v4 = v3 + 1;
  *a1 = v3 + 1;
  v7 = *v3;
  if ( (v7 & 0xC0) != 0 )
    v7 &= 0xC0u;
  switch ( v7 )
  {
    case 0:
    case 10:
    case 11:
    case 45:
    case 64:
    case 192:
      return 1;
    case 1:
      goto LABEL_25;
    case 2:
      if ( (unsigned __int8 *)a2 == v4 )
        goto LABEL_26;
      *a1 = v3 + 2;
      return 1;
    case 3:
      if ( a2 - (unsigned int)v4 <= 1 )
        goto LABEL_26;
      *a1 = v3 + 3;
      return 1;
    case 4:
      if ( a2 - (unsigned int)v4 <= 3 )
        goto LABEL_26;
      *a1 = v3 + 5;
      return 1;
    case 5:
    case 9:
    case 12:
    case 17:
    case 18:
    case 20:
    case 21:
    case 47:
      while ( 1 )
      {
        v8 = a2 == (_DWORD)v4++;
        if ( v8 )
          break;
        *a1 = v4;
        if ( (*(v4 - 1) & 0x80u) == 0 )
        {
          while ( a2 > (unsigned int)v4++ )
          {
            *a1 = v4;
            if ( (*(v4 - 1) & 0x80u) == 0 )
              return 1;
          }
          return 0;
        }
      }
      return 0;
    case 6:
    case 7:
    case 8:
    case 13:
    case 14:
    case 19:
    case 46:
    case 128:
      while ( 1 )
      {
        v8 = v4++ == (unsigned __int8 *)a2;
        if ( v8 )
          break;
        *a1 = v4;
        if ( (*(v4 - 1) & 0x80u) == 0 )
          return 1;
      }
      return 0;
    case 15:
      goto LABEL_23;
    case 16:
    case 22:
      goto LABEL_11;
    case 29:
      if ( a2 - (unsigned int)v4 <= 7 )
        goto LABEL_26;
      *a1 = v3 + 9;
      return 1;
    default:
      return 0;
  }
  do
  {
LABEL_11:
    v8 = v4++ == (unsigned __int8 *)a2;
    if ( v8 )
      return 0;
    *a1 = v4;
  }
  while ( (*(v4 - 1) & 0x80u) != 0 );
LABEL_23:
  if ( !sub_2F117C(a1, a2, (int *)&v11) )
    return 0;
  v4 = *a1;
  a3 = v11;
LABEL_25:
  if ( a3 > a2 - (unsigned int)v4 )
  {
LABEL_26:
    *a1 = (unsigned __int8 *)a2;
    return 0;
  }
  *a1 = &v4[a3];
  return 1;
}
