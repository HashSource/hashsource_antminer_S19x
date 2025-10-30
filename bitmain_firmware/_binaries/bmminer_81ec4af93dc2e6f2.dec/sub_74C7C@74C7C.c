void __fastcall sub_74C7C(_DWORD *a1)
{
  if ( a1 )
  {
    switch ( *a1 )
    {
      case 0:
        sub_72A88(a1);
        break;
      case 1:
        sub_735DC((int)a1);
        break;
      case 2:
        sub_74550((void **)a1);
        break;
      case 3:
        sub_7487C(a1);
        break;
      case 4:
        sub_74AD8(a1);
        break;
      default:
        return;
    }
  }
}
