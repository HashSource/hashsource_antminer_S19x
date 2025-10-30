int __fastcall sub_E656C(int result, int a2)
{
  _DWORD *v2; // r6
  int v3; // r7

  v2 = (_DWORD *)result;
  if ( result )
  {
    if ( !*(_DWORD *)(dword_4788DC + 12) )
    {
      v3 = *(_DWORD *)(result + 4);
      if ( v3 )
      {
        result = v3 + strlen(*(const char **)(result + 4));
        if ( *(_BYTE *)(result - 1) == 47 )
        {
          *(_DWORD *)(dword_4788DC + 12) = v3;
          v2[1] = sub_327254(a2);
          sub_E6538(a2);
          result = sub_212DE8(v2[1]);
          v2[5] = result;
          if ( !result )
          {
            if ( *v2 )
              v2[5] = *(_DWORD *)(*v2 + 20);
          }
        }
      }
    }
  }
  return result;
}
