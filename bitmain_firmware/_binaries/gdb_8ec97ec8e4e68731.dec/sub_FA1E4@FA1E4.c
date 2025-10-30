int __fastcall sub_FA1E4(int result)
{
  int v1; // r6
  int v2; // r4
  int (__fastcall *v3)(int); // r3

  if ( dword_47AC9C > 0 )
  {
    v1 = result;
    v2 = 0;
    do
    {
      v3 = *(int (__fastcall **)(int))(dword_47ACA0 + 4 * v2++);
      result = v3(v1);
    }
    while ( dword_47AC9C > v2 );
  }
  return result;
}
