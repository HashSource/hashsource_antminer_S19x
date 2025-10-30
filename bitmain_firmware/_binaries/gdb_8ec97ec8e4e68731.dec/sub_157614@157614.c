int __fastcall sub_157614(int *a1, int a2)
{
  const char **v4; // r0
  int v5; // r2
  int v7; // [sp+Ch] [bp-8h] BYREF

  sub_25A418(a2, "Dump of expression @ ");
  sub_25A44C(a1, a2);
  sub_25A6BC(", after conversion to prefix form:\nExpression: `", a2);
  v4 = (const char **)*a1;
  v7 = 0;
  (*(void (__fastcall **)(int *, int *, int, _DWORD))v4[8])(a1, &v7, a2, 0);
  sub_25A418(a2, "'\n\tLanguage %s, %d elements, %ld bytes each.\n", *(const char **)*a1, a1[2], 16);
  sub_25A6BC(&word_356638, a2);
  if ( a1[2] > 0 )
  {
    v5 = 0;
    do
      v5 = sub_156B40(a1, a2, v5);
    while ( a1[2] > v5 );
  }
  return sub_25A6BC(&word_356638, a2);
}
