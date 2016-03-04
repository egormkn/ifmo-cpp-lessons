class rational {
	public:
		rational(int);
	rational(int, int);
	int getNum() const;
	int getDenom() const;
	rational operator +(rational const &a) const;
	rational operator -(rational const &a) const;
	rational operator *(rational const &a) const;
	rational operator /(rational const &a) const;
	~rational();

	private:
		int n, d;
		static int gcd (int, int);
		static void simplify(int, int);
};
