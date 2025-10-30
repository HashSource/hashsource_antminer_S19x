void __fastcall sub_1C9C58(int a1)
{
  int v2; // r0
  void (__fastcall *v3)(void **, int); // r2
  void (__fastcall *v4)(void **, int); // r2
  int v5; // r1
  _DWORD *v6; // r0
  _DWORD *v7; // r2
  unsigned int v8; // r4
  int v9; // r5
  int v10; // r6
  _DWORD *v11; // r0
  void *v12; // r0
  void *ptr; // [sp+8h] [bp-18h] BYREF
  _BYTE *v14; // [sp+Ch] [bp-14h]
  int v15; // [sp+10h] [bp-10h]
  void *v16; // [sp+14h] [bp-Ch] BYREF
  int v17; // [sp+18h] [bp-8h]
  int v18; // [sp+1Ch] [bp-4h]

  if ( !a1 )
  {
    sub_94700((int)"probe.c", 425, "%s: Assertion `%s' failed.", "void print_ui_out_info(probe*)", "probe != NULL");
    goto LABEL_22;
  }
  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 36))(a1);
  v3 = *(void (__fastcall **)(void **, int))(*(_DWORD *)v2 + 16);
  if ( v3 == (void (__fastcall *)(void **, int))sub_1C9ADC )
  {
    ptr = 0;
    v14 = 0;
    v15 = 0;
  }
  else
  {
    v3(&ptr, v2);
  }
  v4 = *(void (__fastcall **)(void **, int))(*(_DWORD *)a1 + 40);
  if ( v4 == (void (__fastcall *)(void **, int))sub_6E030 )
  {
    v5 = 0;
    v6 = 0;
    v16 = 0;
    v17 = 0;
    v18 = 0;
  }
  else
  {
    v4(&v16, a1);
    v6 = v16;
    v5 = (v17 - (int)v16) >> 2;
  }
  v7 = ptr;
  if ( v5 != (v14 - (_BYTE *)ptr) >> 3 )
  {
    sub_94700(
      (int)"probe.c",
      431,
      "%s: Assertion `%s' failed.",
      "void print_ui_out_info(probe*)",
      "headings.size () == values.size ()");
    if ( v16 )
      sub_339E64(v16);
LABEL_22:
    v12 = ptr;
    if ( ptr )
      sub_339E64(ptr);
    sub_338FFC(v12);
  }
  if ( v14 != ptr )
  {
    v8 = 0;
    do
    {
      v9 = v6[v8];
      v10 = v7[2 * v8];
      v11 = (_DWORD *)sub_242FDC(v6);
      if ( v9 )
        sub_2575E8(*v11, v10, v9);
      else
        sub_2575A4(*v11, v10);
      v7 = ptr;
      ++v8;
      v6 = v16;
    }
    while ( v8 < (v14 - (_BYTE *)ptr) >> 3 );
  }
  if ( v6 )
    sub_339E64(v6);
  if ( ptr )
    sub_339E64(ptr);
}
