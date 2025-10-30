_QWORD *__fastcall sub_239674(_QWORD *ptr)
{
  __int64 v2; // r4
  int v3; // r3
  int v4; // t1
  int v5; // r0
  _DWORD *v6; // r5
  _DWORD *v7; // r7
  _DWORD *v8; // r4
  _DWORD *v9; // t1
  void (__fastcall *v10)(_DWORD *); // r3
  _DWORD *v11; // r0
  _DWORD *v12; // r0
  _DWORD *v13; // r0
  char *v14; // r0

  v2 = ptr[5];
  *(_DWORD *)ptr = off_3E9B34;
  if ( (_DWORD)v2 != HIDWORD(v2) )
  {
    do
    {
      v4 = *(_DWORD *)v2;
      LODWORD(v2) = v2 + 4;
      v3 = v4;
      v5 = v4;
      if ( v4 )
        (*(void (__fastcall **)(int))(*(_DWORD *)v3 + 8))(v5);
    }
    while ( HIDWORD(v2) != (_DWORD)v2 );
    HIDWORD(v2) = *((_DWORD *)ptr + 10);
  }
  if ( HIDWORD(v2) )
    sub_339E64((void *)HIDWORD(v2));
  v6 = (_DWORD *)*((_DWORD *)ptr + 7);
  v7 = (_DWORD *)*((_DWORD *)ptr + 8);
  if ( v6 != v7 )
  {
    do
    {
      v9 = (_DWORD *)*v6++;
      v8 = v9;
      if ( v9 )
      {
        v10 = *(void (__fastcall **)(_DWORD *))(*v8 + 8);
        if ( (char *)v10 == (char *)sub_239364 )
        {
          v11 = (_DWORD *)v8[16];
          *v8 = off_3E9AC0;
          if ( v11 != v8 + 18 )
            sub_339E64(v11);
          v12 = (_DWORD *)v8[9];
          if ( v12 != v8 + 11 )
            sub_339E64(v12);
          v13 = (_DWORD *)v8[1];
          if ( v13 != v8 + 3 )
            sub_339E64(v13);
          sub_33AC04(v8);
        }
        else
        {
          v10(v8);
        }
      }
    }
    while ( v7 != v6 );
    v7 = (_DWORD *)*((_DWORD *)ptr + 7);
  }
  if ( v7 )
    sub_339E64(v7);
  v14 = (char *)*((_DWORD *)ptr + 1);
  if ( v14 != (char *)ptr + 12 )
    sub_339E64(v14);
  sub_33AC04(ptr);
  return ptr;
}
