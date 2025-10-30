void __fastcall sub_B1E20(int a1, _BYTE *a2, size_t a3, char *s, int a5)
{
  _BOOL4 v6; // r2
  size_t v10; // r1
  _DWORD *v11; // r3
  size_t v12; // r2
  int v13; // r2
  _DWORD *v14; // r0
  __int64 v15; // [sp+8h] [bp-20h] BYREF
  void *ptr; // [sp+10h] [bp-18h] BYREF
  size_t v17; // [sp+14h] [bp-14h]
  _DWORD v18[4]; // [sp+18h] [bp-10h] BYREF

  v6 = a3 != 0;
  if ( a2 )
    v6 = 0;
  ptr = v18;
  if ( v6 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  LODWORD(v15) = a3;
  if ( a3 > 0xF )
  {
    v14 = (_DWORD *)sub_33B2BC(&ptr, &v15, 0);
    ptr = v14;
    v18[0] = v15;
LABEL_15:
    memcpy(v14, a2, a3);
    v10 = v15;
    v11 = ptr;
    goto LABEL_7;
  }
  v10 = a3;
  if ( a3 == 1 )
  {
    v11 = v18;
    LOBYTE(v18[0]) = *a2;
    goto LABEL_7;
  }
  if ( a3 )
  {
    v14 = v18;
    goto LABEL_15;
  }
  v11 = v18;
LABEL_7:
  v17 = v10;
  *((_BYTE *)v11 + v10) = 0;
  v12 = strlen(s);
  if ( 0x7FFFFFFF - v17 < v12 )
    sub_33D184("basic_string::append");
  sub_33C320(&ptr, s, v12);
  if ( sub_A692C((char *)ptr, &v15, v13) )
    sub_B3E5C(a1, a5, v15, HIDWORD(v15), a5);
  else
    sub_25A418(a5, "?");
  if ( ptr != v18 )
    sub_339E64(ptr);
}
