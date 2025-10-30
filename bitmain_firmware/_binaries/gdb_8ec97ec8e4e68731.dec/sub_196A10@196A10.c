void __fastcall sub_196A10(_DWORD *a1, int a2, int a3)
{
  int *v3; // r5
  unsigned int v4; // r4
  unsigned int *v6; // r0
  unsigned int *v7; // r6
  _DWORD *v8; // r5
  int v9; // t1
  int v10; // r0
  int v11; // [sp+8h] [bp-8h] BYREF
  void *ptr; // [sp+Ch] [bp-4h] BYREF

  v3 = *(int **)(a2 + 96);
  v4 = 0;
  v11 = 0;
  v6 = (unsigned int *)sub_196908((_DWORD *)(a2 + 28), v3, (int)&v11, a3, 1u);
  v7 = v6;
  if ( v6 )
  {
    if ( *v6 )
    {
      v8 = v6 + 1;
      do
      {
        v9 = v8[1];
        ++v8;
        v10 = sub_21B7DC(v9);
        ptr = (void *)sub_327254(v10);
        sub_F6C90(a1, &ptr, 0, 0, 0);
        if ( ptr )
          free(ptr);
        ++v4;
      }
      while ( v4 < *v7 );
    }
    free(v7);
  }
}
