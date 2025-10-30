void __fastcall sub_503CC(const char *a1)
{
  _DWORD *v1; // r6
  size_t v3; // r2
  _DWORD *v4; // r0
  int v5; // r1
  _DWORD *v6; // r12
  _DWORD *v7; // r3
  _DWORD *v8; // lr
  bool v9; // zf
  int v10; // r2
  _BYTE *v11; // r0
  _DWORD *v12; // [sp+0h] [bp-30h]
  _DWORD v13[4]; // [sp+8h] [bp-28h] BYREF
  void *ptr[2]; // [sp+18h] [bp-18h] BYREF
  _BYTE v15[16]; // [sp+20h] [bp-10h] BYREF

  if ( a1 )
  {
    ptr[0] = v15;
    sub_4FEDC(ptr, "make ", (int)"");
    v3 = strlen(a1);
    if ( 0x7FFFFFFF - (unsigned int)ptr[1] < v3 )
      sub_33D184("basic_string::append");
    v4 = (_DWORD *)sub_33C320(ptr, a1, v3);
    v12 = v13;
    v6 = v4;
    v8 = v4 + 2;
    v7 = (_DWORD *)*v4;
    v9 = *v4 == (_DWORD)(v4 + 2);
    if ( (_DWORD *)*v4 == v4 + 2 )
    {
      v4 = (_DWORD *)*v8;
      v1 = v13;
      v10 = v8[2];
      v7 = (_DWORD *)v8[3];
      v5 = v8[1];
    }
    else
    {
      v10 = v4[2];
      v12 = (_DWORD *)*v4;
    }
    if ( v9 )
    {
      *v1 = v4;
      v1[1] = v5;
      v1[2] = v10;
      v1[3] = v7;
    }
    else
    {
      v13[0] = v10;
    }
    *((_BYTE *)v6 + 8) = 0;
    *v6 = v8;
    v11 = ptr[0];
    v6[1] = 0;
    if ( v11 != v15 )
      sub_339E64(v11);
    sub_4FB50((int)v12);
    if ( v12 != v13 )
      sub_339E64(v12);
  }
  else
  {
    sub_4FB50((int)"make");
  }
}
