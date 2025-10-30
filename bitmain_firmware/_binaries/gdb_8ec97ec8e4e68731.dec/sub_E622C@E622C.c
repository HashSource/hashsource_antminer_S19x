void sub_E622C()
{
  int v0; // r5
  int v1; // r6
  int v2; // r7
  int v3; // r6

  v0 = *(_DWORD *)(dword_4788DC + 24);
  v1 = *(_DWORD *)(v0 + 32);
  if ( dword_478974 > 0 )
  {
    if ( dword_47AC88 > 0 )
      sub_F43B4(&off_46D334, "Context stack not empty in augment_type_symtab");
    dword_478974 = 0;
  }
  if ( dword_478934 && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "Blocks in a type symtab");
  if ( dword_4788FC && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, "Macro in a type symtab");
  if ( dword_478970 && dword_47AC88 > 0 )
    sub_F43B4(&off_46D334, aLineNumbersRec);
  if ( dword_4788F0 )
  {
    v2 = *(_DWORD *)(v1 + 12);
    sub_E4F54(dword_4788F0, (_DWORD *)(v0 + 12));
    sub_10B4B8(*(_DWORD *)(v2 + 16), dword_4788F0);
  }
  if ( dword_4788F4 )
  {
    v3 = *(_DWORD *)(v1 + 8);
    sub_E4F54(dword_4788F4, (_DWORD *)(v0 + 12));
    sub_10B4B8(*(_DWORD *)(v3 + 16), dword_4788F4);
  }
  sub_E4848();
}
