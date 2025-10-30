__int64 *__fastcall sub_6E828(__int64 *a1, unsigned __int8 *a2, unsigned __int8 **a3, int a4)
{
  const unsigned __int16 **v8; // r0
  unsigned __int8 *v9; // r1
  const unsigned __int16 *v10; // r8
  int v11; // r3
  unsigned __int8 *v12; // r4
  int v13; // r9
  int v14; // lr
  int v15; // r12
  int v16; // t1
  int v17; // r12
  int *v19; // r0
  int v20; // r3
  __int32_t v21; // r3
  __int64 v22; // [sp+0h] [bp-14h] BYREF

  v8 = _ctype_b_loc();
  v9 = a2;
  v10 = *v8;
  do
  {
    v11 = *v9;
    v12 = v9++;
    v13 = v10[v11] & 0x2000;
  }
  while ( (v10[v11] & 0x2000) != 0 );
  if ( v11 == 45 )
  {
    v12 = v9;
    v13 = 1;
  }
  else if ( v11 == 43 )
  {
    v12 = v9;
  }
  if ( a4 )
  {
    if ( a4 == 16 )
    {
      if ( *v12 == 48 && (*_ctype_toupper_loc())[v12[1]] == 88 )
        v12 += 2;
    }
    else if ( (unsigned int)(a4 - 3) > 0x21 )
    {
      memset(&v22, 255, sizeof(v22));
      v19 = _errno_location();
      *a1 = v22;
      *v19 = 34;
      return a1;
    }
  }
  else if ( *v12 == 48 )
  {
    v21 = (*_ctype_toupper_loc())[v12[1]];
    if ( v21 == 88 )
      v12 += 2;
    else
      ++v12;
    if ( v21 == 88 )
      a4 = 16;
    else
      a4 = 8;
  }
  else
  {
    a4 = 10;
  }
  v14 = 0;
  v22 = 0;
  v15 = *v12;
  if ( !*v12 )
    goto LABEL_22;
  do
  {
    if ( (v10[v15] & 0x800) != 0 )
    {
      v17 = (unsigned __int8)(v15 - 48);
    }
    else if ( (v10[v15] & 0x100) != 0 )
    {
      v17 = (unsigned __int8)(v15 - 55);
    }
    else
    {
      if ( (v10[v15] & 0x200) == 0 )
        break;
      v17 = (unsigned __int8)(v15 - 87);
    }
    if ( a4 <= v17 )
      break;
    v14 = 1;
    v22 = a4 * v22 + (unsigned int)v17;
    v16 = *++v12;
    v15 = v16;
  }
  while ( v16 );
  if ( !v14 )
LABEL_22:
    *_errno_location() = 22;
  if ( a3 )
    *a3 = v12;
  if ( v13 )
  {
    LODWORD(v22) = -(int)v22;
    v20 = ~HIDWORD(v22);
    if ( !(_DWORD)v22 )
      v20 = -HIDWORD(v22);
    HIDWORD(v22) = v20;
  }
  *a1 = v22;
  return a1;
}
