int __fastcall sub_17CDBC(int result)
{
  int v1; // r4

  if ( !dword_4878E0 )
  {
    v1 = result;
    result = sub_183CA8(result);
    if ( !result )
      return sub_231C68(v1);
  }
  return result;
}
