int sub_CE158()
{
  int result; // r0
  _DWORD *i; // r4
  _DWORD *v2; // r6
  int v3; // r3
  int v4; // r3

  result = sub_98F78(&dword_4878EC, &dword_475848);
  if ( !result )
  {
    result = sub_23E408(dword_4878EC, dword_4878F0, dword_4878F4);
    if ( result )
    {
      for ( i = *(_DWORD **)(result + 136); i; i = (_DWORD *)*i )
      {
        v2 = (_DWORD *)i[4];
        i[3] = 0;
        i[4] = 0;
        if ( v2 )
        {
          v3 = v2[1];
          v2[1] = v3 - 1;
          if ( v3 == 1 )
          {
            (*(void (__fastcall **)(_DWORD *))(*v2 + 8))(v2);
            v4 = v2[2];
            v2[2] = v4 - 1;
            if ( v4 == 1 )
              (*(void (__fastcall **)(_DWORD *))(*v2 + 12))(v2);
          }
        }
        result = i[5];
        if ( result )
        {
          result = ((int (*)(void))loc_26C200)();
          i[5] = 0;
        }
      }
    }
  }
  return result;
}
