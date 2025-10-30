int __fastcall sub_E4F54(int result, _DWORD *a2)
{
  _DWORD *v2; // r6
  _DWORD *v4; // r5
  int v5; // r4
  int v6; // t1

  v2 = (_DWORD *)result;
  if ( result )
  {
    do
    {
      if ( (int)v2[1] > 0 )
      {
        v4 = v2 + 1;
        v5 = 0;
        do
        {
          while ( 1 )
          {
            v6 = v4[1];
            ++v4;
            ++v5;
            result = sub_2209DC(v6);
            if ( !result )
              break;
            if ( v2[1] <= v5 )
              goto LABEL_7;
          }
          result = ((int (__fastcall *)(_DWORD, _DWORD))loc_2209F8)(*v4, *a2);
        }
        while ( v2[1] > v5 );
      }
LABEL_7:
      v2 = (_DWORD *)*v2;
    }
    while ( v2 );
  }
  return result;
}
