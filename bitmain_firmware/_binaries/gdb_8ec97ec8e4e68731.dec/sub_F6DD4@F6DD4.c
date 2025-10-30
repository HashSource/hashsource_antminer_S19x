void __fastcall sub_F6DD4(_DWORD *a1, void ***a2)
{
  void **v2; // r4
  void **v3; // r7
  void *v5; // r12
  void *ptr; // [sp+Ch] [bp-8h] BYREF

  v2 = *a2;
  v3 = a2[1];
  if ( *a2 != v3 )
  {
    do
    {
      v5 = *v2;
      *v2++ = 0;
      ptr = v5;
      sub_F6C90(a1, &ptr, 0, 0, 0);
      if ( ptr )
        free(ptr);
    }
    while ( v3 != v2 );
  }
}
