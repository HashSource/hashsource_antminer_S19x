bool __fastcall sub_555D8(int a1, int *a2, int a3)
{
  int v7; // [sp+10h] [bp-Ch] BYREF
  int v8; // [sp+14h] [bp-8h]

  v7 = 0;
  dword_94328 = *a2;
  do
    v8 = sub_55858(a1, a2, &v7, a3);
  while ( v8 == 1 );
  return v8 == 0;
}
