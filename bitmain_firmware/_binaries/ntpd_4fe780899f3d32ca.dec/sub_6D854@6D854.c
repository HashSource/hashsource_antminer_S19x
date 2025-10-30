__int64 *__fastcall sub_6D854(__int64 *a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4)
{
  const unsigned __int16 *v8; // r8
  unsigned __int8 *v9; // r1
  int v10; // r3
  unsigned __int8 *v11; // r4
  int v12; // r9
  int v13; // lr
  int v14; // r12
  int v15; // t1
  int v16; // r12
  __int64 v18; // r2
  __int64 v19; // [sp+10h] [bp-14h]

  v8 = *_ctype_b_loc();
  v9 = a2;
  do
  {
    v10 = *v9;
    v11 = v9++;
    v12 = v8[v10] & 0x2000;
  }
  while ( (v8[v10] & 0x2000) != 0 );
  if ( v10 == 45 )
  {
    v11 = v9;
    v12 = 1;
  }
  else if ( v10 == 43 )
  {
    v11 = v9;
  }
  if ( a4 )
  {
    if ( a4 == 16 )
    {
      if ( *v11 == 48 && (*_ctype_toupper_loc())[v11[1]] == 88 )
        v11 += 2;
    }
    else if ( (unsigned int)(a4 - 3) > 0x21 )
    {
      *_errno_location() = 34;
      *a1 = -1;
      return a1;
    }
  }
  else if ( *v11 == 48 )
  {
    if ( (*_ctype_toupper_loc())[v11[1]] == 88 )
    {
      v11 += 2;
      a4 = 16;
    }
    else
    {
      ++v11;
      a4 = 8;
    }
  }
  else
  {
    a4 = 10;
  }
  v13 = 0;
  v19 = 0;
  v14 = *v11;
  if ( !*v11 )
    goto LABEL_22;
  do
  {
    if ( (v8[v14] & 0x800) != 0 )
    {
      v16 = (unsigned __int8)(v14 - 48);
    }
    else if ( (v8[v14] & 0x100) != 0 )
    {
      v16 = (unsigned __int8)(v14 - 55);
    }
    else
    {
      if ( (v8[v14] & 0x200) == 0 )
        break;
      v16 = (unsigned __int8)(v14 - 87);
    }
    if ( a4 <= v16 )
      break;
    v13 = 1;
    v19 = a4 * v19 + (unsigned int)v16;
    v15 = *++v11;
    v14 = v15;
  }
  while ( v15 );
  if ( !v13 )
LABEL_22:
    *_errno_location() = 22;
  if ( a3 )
    *a3 = v11;
  if ( v12 )
  {
    HIDWORD(v18) = ~HIDWORD(v19);
    if ( !(_DWORD)v19 )
      HIDWORD(v18) = -HIDWORD(v19);
    LODWORD(v18) = -(int)v19;
    v19 = v18;
  }
  *a1 = v19;
  return a1;
}
