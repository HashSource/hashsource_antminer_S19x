int __fastcall sub_147794(int a1, const char *a2)
{
  int result; // r0
  int v4; // r5
  int v5; // r7
  unsigned int v6; // r4
  int v7; // r6
  const char *v8; // r0

  result = ((int (*)(void))loc_11EB1C)();
  if ( *(int *)(dword_4872D8 + 352) > 0 )
  {
    v4 = 0;
    do
    {
      result = ((int (__fastcall *)(int))loc_11E164)(v4);
      v5 = result;
      v6 = *(_DWORD *)(*(_DWORD *)(result + 24) + 4);
      if ( !v6 )
      {
        result = ((int (*)(void))loc_12CFA4)();
        v7 = result;
        if ( result )
        {
          if ( *(_DWORD *)(result + 8) )
          {
            while ( 1 )
            {
              v8 = *(const char **)(*(_DWORD *)(v7 + 12) + 4 * v6++);
              result = j_strcmp(v8, a2);
              if ( !result )
                break;
              if ( *(_DWORD *)(v7 + 8) <= v6 )
                goto LABEL_4;
            }
            result = sub_147398(v5);
          }
        }
      }
LABEL_4:
      ++v4;
    }
    while ( *(_DWORD *)(dword_4872D8 + 352) > v4 );
  }
  return result;
}
