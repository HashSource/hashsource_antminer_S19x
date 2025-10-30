void __fastcall sub_1C5EA4(int a1, const char *a2, int a3)
{
  int v5; // r0
  int v6; // r9
  unsigned int v7; // r8
  size_t v8; // r5
  size_t v9; // r4
  __int64 v10; // r0
  unsigned int v11; // r7
  char *v12; // r8
  char *v13; // r0
  char *next_free; // r3
  char v15[4]; // [sp+10h] [bp-5Ch] BYREF
  int v16; // [sp+14h] [bp-58h]
  struct obstack v17; // [sp+1Ch] [bp-50h] BYREF

  v16 = a1;
  v5 = sub_26BC70(a3);
  v6 = sub_170040(v5);
  v7 = ((int (*)(void))loc_165BB8)();
  v8 = 0;
  v9 = *(_DWORD *)(sub_170CD8((int)off_46D5A4[0], v6, "wchar_t", 0, 0) + 20);
  LODWORD(v10) = sub_26EBA8(a3);
  v11 = v10;
  while ( 1 )
  {
    sub_258BD4(v10);
    sub_FA844(v8 + v11, (int)v15, v9);
    LODWORD(v10) = sub_15C250((unsigned __int8 *)v15, v9, v7);
    if ( !v10 )
      break;
    v8 += v9;
  }
  if ( v8 )
    sub_FA844(v11, (int)v15, v8);
  memset(&v15[v8], 0, v9);
  obstack_begin(&v17, 0, 0, (void *(*)(int))sub_93028, sub_1C597C);
  v12 = sub_EED48(v6);
  v13 = sub_EEBB8();
  sub_EEF04(v12, v13, v15, v8, v9, &v17, 1);
  next_free = v17.next_free;
  if ( v17.chunk_limit == v17.next_free )
  {
    obstack_newchunk(&v17, 1);
    next_free = v17.next_free;
  }
  v17.next_free = next_free + 1;
  *next_free = 0;
  sub_25A418(v16, a2, v17.object_base);
  obstack_free(&v17, 0);
}
