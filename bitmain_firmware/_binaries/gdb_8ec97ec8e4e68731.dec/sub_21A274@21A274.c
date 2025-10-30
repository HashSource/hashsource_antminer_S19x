_DWORD *sub_21A274()
{
  _DWORD *i; // r6
  _DWORD *j; // r5
  _DWORD *k; // r4
  char *v3; // r0
  int v5; // [sp+4h] [bp-10h] BYREF
  int *v6; // [sp+8h] [bp-Ch] BYREF
  int v7; // [sp+Ch] [bp-8h]

  if ( !sub_1B7B9C() && !sub_1B7B24() )
    sub_946E0("No symbol table is loaded.  Use the \"file\" command.");
  sub_15A00C(&v5);
  v6 = &v5;
  sub_259F10("Source files for which symbols have been read in:\n\n");
  v7 = 1;
  for ( i = *(_DWORD **)(dword_487D2C + 36); i; i = (_DWORD *)*i )
  {
    for ( j = (_DWORD *)i[5]; j; j = (_DWORD *)*j )
    {
      for ( k = (_DWORD *)j[3]; k; k = (_DWORD *)*k )
      {
        v3 = sub_204308((int)k);
        sub_21A210((int)v3, (int)&v6);
      }
    }
  }
  sub_259F10("\n\n");
  sub_259F10("Source files for which symbols will be read in on demand:\n\n");
  sub_15A058(&v5);
  v7 = 1;
  sub_215390((int)sub_21A38C, (int)&v6, 1);
  sub_259F10((const char *)&word_356638);
  return sub_15A060(&v5);
}
