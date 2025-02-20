Summary: The ATerm Library
Name: aterm
Version: 2.6
Release: 1
License: LGPL
Group: Development
URL: http://www.cwi.nl/htbin/sen1/twiki/bin/view/SEN1/ATermLibrary
Source0: %{name}-%{version}.tar.gz
BuildRoot: %{_tmppath}/%{name}-%{version}-buildroot

%description

ATerm (short for Annotated Term) is an abstract data type designed for
the exchange of tree-like data structures between distributed
applications.

The ATerm library forms a comprehensive procedural interface which
enables creation and manipulation of ATerms in C and Java. The ATerm
implementation is based on maximal subterm sharing and automatic
garbage collection.

A binary exchange format for the concise representation of ATerms
(sharing preserved) allows the fast exchange of ATerms between
applications. In a typical application---parse trees which contain
considerable redundant information---less than 2 bytes are needed to
represent a node in memory, and less than 2 bits are needed to
represent it in binary format. The implementation of ATerms scales up
to the manipulation of ATerms in the giga-byte range.

Programming

The ATerm library provides a comprehensive interface in C and Java to
handle the annotated term data-type in an efficient manner. If the
terms you handle are limited to a specific signature, you can use
ApiGen to generate typed interfaces to the same ATerms.

%prep
%setup -q

%build
CFLAGS="-D__NO_CTYPE" ./configure --prefix=%{_prefix}
#--includedir=%{_includedir}/%{name} 
make

%install
rm -rf $RPM_BUILD_ROOT
make DESTDIR=$RPM_BUILD_ROOT install

%clean
rm -rf $RPM_BUILD_ROOT

%files
%defattr(-,root,root,-)
%{_bindir}/*
%{_includedir}/*
#/%{name}
%{_libdir}/*
%doc

%changelog
* Wed Mar 31 2004 Armijn Hemel <armijn@uulug.nl> 2.0.5
- cleanups so directories in /usr won't be owned by ATerm RPM
* Thu Jan  2 2003 Eelco Visser <visser@cs.uu.nl> 1.6.7-1
- Initial build.
