int __fastcall sub_1C44E4(_BYTE *a1, size_t a2, int a3, int a4)
{
  _BOOL4 v5; // r1
  void *v9; // r12
  _DWORD *v10; // r3
  int v11; // r4
  _DWORD *v13; // r0
  void *v14; // [sp+4h] [bp-1Ch] BYREF
  void *ptr[2]; // [sp+8h] [bp-18h] BYREF
  _DWORD v16[4]; // [sp+10h] [bp-10h] BYREF

  v5 = a2 != 0;
  if ( a1 )
    v5 = 0;
  ptr[0] = v16;
  if ( v5 )
    sub_33D0B8("basic_string::_M_construct null not valid");
  v14 = (void *)a2;
  if ( a2 > 0xF )
  {
    v13 = (_DWORD *)sub_33B2BC(ptr, &v14, 0);
    ptr[0] = v13;
    v16[0] = v14;
LABEL_11:
    memcpy(v13, a1, a2);
    v9 = v14;
    v10 = ptr[0];
    goto LABEL_7;
  }
  v9 = (void *)a2;
  if ( a2 == 1 )
  {
    v10 = v16;
    LOBYTE(v16[0]) = *a1;
    goto LABEL_7;
  }
  if ( a2 )
  {
    v13 = v16;
    goto LABEL_11;
  }
  v10 = v16;
LABEL_7:
  ptr[1] = v9;
  *((_BYTE *)v9 + (_DWORD)v10) = 0;
  v11 = sub_25286C(a4, a3, ptr);
  if ( ptr[0] != v16 )
    sub_339E64(ptr[0]);
  return v11;
}
